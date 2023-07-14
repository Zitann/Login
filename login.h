//
// Created by jzitan on 2023/7/11.
//

#ifndef LOGIN_LOGIN_H
#define LOGIN_LOGIN_H

#include <QWidget>


QT_BEGIN_NAMESPACE
namespace Ui { class Login; }
QT_END_NAMESPACE

class Login : public QWidget {
Q_OBJECT

public:
    explicit Login(QWidget *parent = nullptr);

    ~Login() override;

private:
    Ui::Login *ui;
    QString username;
    QString password;
    int error_times;      //����������
public slots:
    void on_login_clicked();    //��¼
    void on_signup_clicked();   //ע��
    void on_close_clicked();    //�رմ���
    void on_min_clicked();    //��С������
    void on_see_clicked();  //�鿴����
};


#endif //LOGIN_LOGIN_H
