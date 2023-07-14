//
// Created by jzitan on 2023/7/11.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Login.h" resolved

#include "login.h"
#include "ui_Login.h"
#include "home.h"
#include <QMessageBox>
#include <QDate>
#include "sqlite3.h"
extern sqlite3 *db;
extern User* getuser(QString username);

Login::Login(QWidget *parent) :
    QWidget(parent), ui(new Ui::Login) {
    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);  //去掉标题栏
    this->setAttribute(Qt::WA_TranslucentBackground,true);  //背景透明
    ui->setupUi(this);
    username = "";
    password = "";
    ui->username->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->password->setAttribute(Qt::WA_InputMethodEnabled, false);
    connect(ui->username, SIGNAL(returnPressed()), this, SLOT(on_login_clicked()));
    connect(ui->password, SIGNAL(returnPressed()), this, SLOT(on_login_clicked()));
}

Login::~Login() {
    delete ui;
}

void Login::on_close_clicked() {
    this->close();
}

void Login::on_min_clicked() {
    this->showMinimized();
}

void Login::on_login_clicked() {
    if(ui->mode->text()==QString::fromLocal8Bit("登录"))
    {
        username = ui->username->text();
        password = ui->password->text();
        User* user = getuser(username);
        if(username == QString::fromLocal8Bit("") || password == QString::fromLocal8Bit(""))
        {
            QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名或密码不能为空！"),QMessageBox::Yes);
            return;
        }else{
            //检查用户是否存在
            if(user==nullptr){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名不存在！"),QMessageBox::Yes);
                return;
            }
            //查看是否可用
            if(user->getinfo(6)==QString::fromLocal8Bit("0")){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("该用户已被禁用！"),QMessageBox::Yes);
                return;
            }
            //检查是否超过禁用时间
            if(user->getinfo(7)>=QDate::currentDate().toString("yyyy-MM-dd")){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("该用户已被禁用！"),QMessageBox::Yes);
                return;
            }
            //检查密码
            if(password!=user->getinfo(2)){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("密码错误！"),QMessageBox::Yes);
                error_times++;
                if(error_times==3){
                    //禁用用户
                    char sql[100];
                    char **table;
                    char *zErrMsg = nullptr;
                    int row,column;
                    QString time =QDate::currentDate().toString("yyyy-MM-dd");
                    sprintf(sql,"update users set forbiddentime = '%s' where username = '%s';",time.toStdString().c_str(),username.toStdString().c_str());
                    int rc = sqlite3_get_table(db, sql, &table, &row, &column, &zErrMsg);
                    if(rc != SQLITE_OK){
                        QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("禁用失败！"),QMessageBox::Yes);
                        return;
                    }
                    QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("密码错误次数过多，该用户已被禁用！"),QMessageBox::Yes);
                    return;
                }
                return;
            }else{
                //登录成功，跳转到主界面
                Home *home = new Home(nullptr,user);
                home->show();
                this->close();
            }
        }
    }
    else    //注册
    {
        QString username = ui->username->text();
        QString password = ui->password->text();
        if(username==""||password==""){
            QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名或密码不能为空！"),QMessageBox::Yes);
            return;
        }
        //检查用户名是否只有数字和字母且以字母开头
        for(int i=0;i<username.length();i++){
            if(username[i]<'0'||username[i]>'9'&&username[i]<'A'||username[i]>'Z'&&username[i]<'a'||username[i]>'z'){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名只能由数字和字母组成！"),QMessageBox::Yes);
                return;
            }
        }
        if(username[0]<'A'||username[0]>'Z'&&username[0]<'a'||username[0]>'z'){
            QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名必须以字母开头！"),QMessageBox::Yes);
            return;
        }
        //检查密码是否符合规则
        for(int i=0;i<password.length();i++){
            if(!((password[i]>=QChar('0')&&password[i]<=QChar('9'))||!(password[i]>=QChar('A')&&password[i]<=QChar('Z'))||!(password[i]>=QChar('a')&&password[i]<=QChar('z'))||password[i]==QChar('_')||password[i]==QChar('@')||password[i]==QChar('.'))){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("密码只能由数字、字母、下划线、@和.组成！"),QMessageBox::Yes);
                return;
            }
        }
        //检查用户名和密码长度
        if(username.length()>15||username.length()<6||password.length()>15||password.length()<6){
            QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("用户名或密码长度应该在6-15位之间！"),QMessageBox::Yes);
            return;
        }
        char *zErrMsg = 0;
        int row = 0;
        int column = 0;
        char** table = NULL;
        char sql[100];
        sprintf(sql,"select * from users where username = '%s';",username.toStdString().c_str());
        int rc = sqlite3_get_table(db, sql, &table, &row, &column, &zErrMsg);
        if(row!=0||rc != SQLITE_OK){
            QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("该用户名已被注册！"),QMessageBox::Yes);
            return;
        }
        else{
            //在sqlite3数据库中插入用户信息
            sprintf(sql,"insert into users(username,password,number,email,level,available,forbiddentime) values('%s','%s','%s','%s','%d',%d,'%s');",
                    username.toStdString().c_str(),password.toStdString().c_str(),"","", 0,1,"");
            rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if(rc != SQLITE_OK){
                QMessageBox::warning(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("注册失败！"),QMessageBox::Yes);
                return;
            }
            else{
                QMessageBox::information(this,QString::fromLocal8Bit("警告"),QString::fromLocal8Bit("注册成功！"),QMessageBox::Yes);
                ui->mode->setText(QString::fromLocal8Bit("登录"));
                ui->login->setText(QString::fromLocal8Bit("登录"));
                ui->signup->setText(QString::fromLocal8Bit("点击注册"));
                ui->label->setText(QString::fromLocal8Bit("没有账号？"));
            }
        }
    }

}

void Login::on_signup_clicked() {
    if(ui->signup->text()==QString::fromLocal8Bit("点击登录"))
    {
        ui->mode->setText(QString::fromLocal8Bit("登录"));
        ui->login->setText(QString::fromLocal8Bit("登录"));
        ui->signup->setText(QString::fromLocal8Bit("点击注册"));
        ui->label->setText(QString::fromLocal8Bit("没有账号？"));
    }
    else
    {
        ui->mode->setText(QString::fromLocal8Bit("注册"));
        ui->login->setText(QString::fromLocal8Bit("注册"));
        ui->signup->setText(QString::fromLocal8Bit("点击登录"));
        ui->label->setText(QString::fromLocal8Bit("已有账号？"));
    }
}

void Login::on_see_clicked() {
    if(ui->password->echoMode()==QLineEdit::Password){
        ui->password->setEchoMode(QLineEdit::Normal);
    }
    else{
        ui->password->setEchoMode(QLineEdit::Password);
    }
}
