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
    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);  //ȥ��������
    this->setAttribute(Qt::WA_TranslucentBackground,true);  //����͸��
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
    if(ui->mode->text()==QString::fromLocal8Bit("��¼"))
    {
        username = ui->username->text();
        password = ui->password->text();
        User* user = getuser(username);
        if(username == QString::fromLocal8Bit("") || password == QString::fromLocal8Bit(""))
        {
            QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û��������벻��Ϊ�գ�"),QMessageBox::Yes);
            return;
        }else{
            //����û��Ƿ����
            if(user==nullptr){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û��������ڣ�"),QMessageBox::Yes);
                return;
            }
            //�鿴�Ƿ����
            if(user->getinfo(6)==QString::fromLocal8Bit("0")){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���û��ѱ����ã�"),QMessageBox::Yes);
                return;
            }
            //����Ƿ񳬹�����ʱ��
            if(user->getinfo(7)>=QDate::currentDate().toString("yyyy-MM-dd")){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���û��ѱ����ã�"),QMessageBox::Yes);
                return;
            }
            //�������
            if(password!=user->getinfo(2)){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�������"),QMessageBox::Yes);
                error_times++;
                if(error_times==3){
                    //�����û�
                    char sql[100];
                    char **table;
                    char *zErrMsg = nullptr;
                    int row,column;
                    QString time =QDate::currentDate().toString("yyyy-MM-dd");
                    sprintf(sql,"update users set forbiddentime = '%s' where username = '%s';",time.toStdString().c_str(),username.toStdString().c_str());
                    int rc = sqlite3_get_table(db, sql, &table, &row, &column, &zErrMsg);
                    if(rc != SQLITE_OK){
                        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("����ʧ�ܣ�"),QMessageBox::Yes);
                        return;
                    }
                    QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�������������࣬���û��ѱ����ã�"),QMessageBox::Yes);
                    return;
                }
                return;
            }else{
                //��¼�ɹ�����ת��������
                Home *home = new Home(nullptr,user);
                home->show();
                this->close();
            }
        }
    }
    else    //ע��
    {
        QString username = ui->username->text();
        QString password = ui->password->text();
        if(username==""||password==""){
            QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û��������벻��Ϊ�գ�"),QMessageBox::Yes);
            return;
        }
        //����û����Ƿ�ֻ�����ֺ���ĸ������ĸ��ͷ
        for(int i=0;i<username.length();i++){
            if(username[i]<'0'||username[i]>'9'&&username[i]<'A'||username[i]>'Z'&&username[i]<'a'||username[i]>'z'){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û���ֻ�������ֺ���ĸ��ɣ�"),QMessageBox::Yes);
                return;
            }
        }
        if(username[0]<'A'||username[0]>'Z'&&username[0]<'a'||username[0]>'z'){
            QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û�����������ĸ��ͷ��"),QMessageBox::Yes);
            return;
        }
        //��������Ƿ���Ϲ���
        for(int i=0;i<password.length();i++){
            if(!((password[i]>=QChar('0')&&password[i]<=QChar('9'))||!(password[i]>=QChar('A')&&password[i]<=QChar('Z'))||!(password[i]>=QChar('a')&&password[i]<=QChar('z'))||password[i]==QChar('_')||password[i]==QChar('@')||password[i]==QChar('.'))){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("����ֻ�������֡���ĸ���»��ߡ�@��.��ɣ�"),QMessageBox::Yes);
                return;
            }
        }
        //����û��������볤��
        if(username.length()>15||username.length()<6||password.length()>15||password.length()<6){
            QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û��������볤��Ӧ����6-15λ֮�䣡"),QMessageBox::Yes);
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
            QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���û����ѱ�ע�ᣡ"),QMessageBox::Yes);
            return;
        }
        else{
            //��sqlite3���ݿ��в����û���Ϣ
            sprintf(sql,"insert into users(username,password,number,email,level,available,forbiddentime) values('%s','%s','%s','%s','%d',%d,'%s');",
                    username.toStdString().c_str(),password.toStdString().c_str(),"","", 0,1,"");
            rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
            if(rc != SQLITE_OK){
                QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("ע��ʧ�ܣ�"),QMessageBox::Yes);
                return;
            }
            else{
                QMessageBox::information(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("ע��ɹ���"),QMessageBox::Yes);
                ui->mode->setText(QString::fromLocal8Bit("��¼"));
                ui->login->setText(QString::fromLocal8Bit("��¼"));
                ui->signup->setText(QString::fromLocal8Bit("���ע��"));
                ui->label->setText(QString::fromLocal8Bit("û���˺ţ�"));
            }
        }
    }

}

void Login::on_signup_clicked() {
    if(ui->signup->text()==QString::fromLocal8Bit("�����¼"))
    {
        ui->mode->setText(QString::fromLocal8Bit("��¼"));
        ui->login->setText(QString::fromLocal8Bit("��¼"));
        ui->signup->setText(QString::fromLocal8Bit("���ע��"));
        ui->label->setText(QString::fromLocal8Bit("û���˺ţ�"));
    }
    else
    {
        ui->mode->setText(QString::fromLocal8Bit("ע��"));
        ui->login->setText(QString::fromLocal8Bit("ע��"));
        ui->signup->setText(QString::fromLocal8Bit("�����¼"));
        ui->label->setText(QString::fromLocal8Bit("�����˺ţ�"));
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
