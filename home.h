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
    void showinfo();    //��ʾ���û���Ϣ
    void showinfo2();   //��ʾ��ѯ�û���Ϣ
    ~Home() override;

private:
    Ui::Home *ui;
    User *user; //���û�
    User *temp; //��ѯ�û�
public slots:
    void on_close_clicked();  //�رմ���
    void on_min_clicked();    //��С������
    void on_quit_clicked();  //�˳���¼
    void on_search_clicked();   //��ѯ�û�
    void on_allow_clicked();    //����û���¼
    void on_forbidden_clicked();    //�����û���¼
    void on_delete_2_clicked(); //ɾ���û�
    void on_change_2_clicked(); //�޸��û���Ϣ
};


#endif //LOGIN_HOME_H
