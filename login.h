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
    int error_times;      //密码错误次数
public slots:
    void on_login_clicked();    //登录
    void on_signup_clicked();   //注册
    void on_close_clicked();    //关闭窗口
    void on_min_clicked();    //最小化窗口
    void on_see_clicked();  //查看密码
};


#endif //LOGIN_LOGIN_H
