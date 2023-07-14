//
// Created by jzitan on 2023/7/12.
//

// You may need to build the project (run Qt uic code generator) to get "ui_Wiki.h" resolved

#include <QMessageBox>
#include "home.h"
#include "ui_home.h"
#include "login.h"
#include "sqlite3.h"

extern sqlite3 *db;
extern User* getuser(QString username);

Home::Home(QWidget *parent, User *user) :
        QWidget(parent), ui(new Ui::Home) {
    this->setWindowFlags(windowFlags() | Qt::FramelessWindowHint);  //ȥ��������
    this->setAttribute(Qt::WA_TranslucentBackground,true);  //����͸��
    ui->setupUi(this);
    ui->username_2->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->password_2->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->number_2->setAttribute(Qt::WA_InputMethodEnabled, false);
    ui->email_2->setAttribute(Qt::WA_InputMethodEnabled, false);

    this->user = user;
    if(user->getinfo(5) == QString::fromLocal8Bit("0"))     //�������ͨ�û���ɾ������Աѡ�
        ui->tabWidget->removeTab(1);
    temp = nullptr;
    showinfo();
}

Home::~Home() {
    delete ui;
}

void Home::on_close_clicked() {
    this->close();
}

void Home::on_min_clicked(){
    this->showMinimized();
}

void Home::on_quit_clicked(){
    Login *login = new Login(nullptr);
    login->show();
    this->close();
}

void Home::on_search_clicked(){
    if(ui->username_2->text()==QString::fromLocal8Bit(""))
    {
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û�������Ϊ�գ�"),QMessageBox::Yes);
        return;
    }
    temp = getuser(ui->username_2->text());
    if(temp == nullptr){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û��������ڣ�"),QMessageBox::Yes);
        return;
    }
    showinfo2();
}

void Home::on_forbidden_clicked(){
    if(temp == nullptr){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���Ȳ�ѯ�û���"),QMessageBox::Yes);
        return;
    }
    char *zErrMsg = 0;
    char sql[100];
    sprintf(sql,"update users set available = 0 where id = %d;",temp->getinfo(0).toInt());
    int rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
    if(rc != SQLITE_OK){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�����û�ʧ�ܣ�"),QMessageBox::Yes);
        return;
    }else{
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�����û��ɹ���"),QMessageBox::Yes);

        return;
    }
}

void Home::on_delete_2_clicked(){
    if(temp == nullptr){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���Ȳ�ѯ�û���"),QMessageBox::Yes);
        return;
    }
    char *zErrMsg = 0;
    char sql[100];
    sprintf(sql,"delete from users where id = %d;",temp->getinfo(0).toInt());
    int rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
    if(rc != SQLITE_OK){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("ɾ���û�ʧ�ܣ�"),QMessageBox::Yes);
        return;
    } else {
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("ɾ���û��ɹ���"),QMessageBox::Yes);
        ui->username_2->setText(QString::fromLocal8Bit(""));
        ui->password_2->setText(QString::fromLocal8Bit(""));
        ui->number_2->setText(QString::fromLocal8Bit(""));
        ui->email_2->setText(QString::fromLocal8Bit(""));
        ui->level_2->setText(QString::fromLocal8Bit(""));
        temp = nullptr;
        return;
    }
}

void Home::on_change_2_clicked(){
    if(temp = nullptr){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���Ȳ�ѯ�û���"),QMessageBox::Yes);
        return;
    }
    if(ui->password_2->text().isEmpty()){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���벻��Ϊ�գ�"),QMessageBox::Yes);
        return;
    }
    QString username = ui->username_2->text();
    QString password = ui->password_2->text();
    QString number = ui->number_2->text();
    QString email = ui->email_2->text();
    int id;
    int level;
    if(ui->level_2->text() == QString::fromLocal8Bit("��ͨ�û�"))
        level = 0;
    else if(ui->level_2->text() == QString::fromLocal8Bit("����Ա"))
        level = 1;
    else
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�û�Ȩ�޴���"),QMessageBox::Yes);
    //��ȡ�û�id
    char *zErrMsg = 0;
    char sql[100];
    sprintf(sql,"select id from users where username = '%s';",username.toStdString().c_str());
    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
    rc = sqlite3_step(stmt);
    id = sqlite3_column_int(stmt, 0);
    sprintf(sql,"update users set password = '%s',number = '%s',email = '%s',level = %d where id = %d;",password.toStdString().c_str(),number.toStdString().c_str(),email.toStdString().c_str(),level,id);
    rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
    if(rc != SQLITE_OK){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�޸��û���Ϣʧ�ܣ�"),QMessageBox::Yes);
        return;
    } else {
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�޸��û���Ϣ�ɹ���"),QMessageBox::Yes);
        on_search_clicked();
        return;
    }
}

void Home::showinfo() {
    ui->username->setText(QString::fromLocal8Bit(user->getinfo(1).toStdString()));
    ui->password->setText(QString::fromLocal8Bit(user->getinfo(2).toStdString()));
    ui->number->setText(QString::fromLocal8Bit(user->getinfo(3).toStdString()));
    ui->email->setText(QString::fromLocal8Bit(user->getinfo(4).toStdString()));
    if(user->getinfo(5)=="0")
        ui->level->setText(QString::fromLocal8Bit("��ͨ�û�"));
    else
        ui->level->setText(QString::fromLocal8Bit("����Ա"));
}

void Home::showinfo2() {
    ui->username_2->setText(QString::fromLocal8Bit(temp->getinfo(1).toStdString()));
    ui->password_2->setText(QString::fromLocal8Bit(temp->getinfo(2).toStdString()));
    ui->number_2->setText(QString::fromLocal8Bit(temp->getinfo(3).toStdString()));
    ui->email_2->setText(QString::fromLocal8Bit(temp->getinfo(4).toStdString()));
    if(temp->getinfo(5)=="0")
        ui->level_2->setText(QString::fromLocal8Bit("��ͨ�û�"));
    else
        ui->level_2->setText(QString::fromLocal8Bit("����Ա"));
}

void Home::on_allow_clicked() {
    if(temp == nullptr){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("���Ȳ�ѯ�û���"),QMessageBox::Yes);
        return;
    }
    char *zErrMsg = 0;
    char sql[100];
    sprintf(sql,"update users set available = 1 where id = %d;",temp->getinfo(0).toInt());
    int rc = sqlite3_exec(db, sql, NULL, NULL, &zErrMsg);
    if(rc != SQLITE_OK){
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�����û�ʧ�ܣ�"),QMessageBox::Yes);
        return;
    }else{
        QMessageBox::warning(this,QString::fromLocal8Bit("����"),QString::fromLocal8Bit("�����û��ɹ���"),QMessageBox::Yes);
        return;
    }
}
