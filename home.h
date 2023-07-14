//
// Created by jzitan on 2023/7/12.
//

#ifndef LOGIN_HOME_H
#define LOGIN_HOME_H

#include <QWidget>
#include "User.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Home; }
QT_END_NAMESPACE

class Home : public QWidget {
Q_OBJECT

public:
    explicit Home(QWidget *parent = nullptr, User *user = nullptr);
    void showinfo();    //显示本用户信息
    void showinfo2();   //显示查询用户信息
    ~Home() override;

private:
    Ui::Home *ui;
    User *user; //本用户
    User *temp; //查询用户
public slots:
    void on_close_clicked();  //关闭窗口
    void on_min_clicked();    //最小化窗口
    void on_quit_clicked();  //退出登录
    void on_search_clicked();   //查询用户
    void on_allow_clicked();    //解禁用户登录
    void on_forbidden_clicked();    //禁用用户登录
    void on_delete_2_clicked(); //删除用户
    void on_change_2_clicked(); //修改用户信息
};


#endif //LOGIN_HOME_H
