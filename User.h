//
// Created by jzitan on 2023/7/13.
//

#ifndef LOGIN_USER_H
#define LOGIN_USER_H


#include <QString>

class User {
private:
    bool available;
    int id;
    QString forbidden_time;
    QString number;
    QString email;
    QString level;
    QString password;
    QString username;
public:
    User(int id, QString username, QString password, QString number, QString email, QString level, bool available,
         QString forbidden_time) {
        this->id = id;
        this->username = username;
        this->password = password;
        this->number = number;
        this->email = email;
        this->level = level;
        this->available = available;
        this->forbidden_time = forbidden_time;
    }
    QString getinfo(int num){
        switch (num) {
            case 0:
                return QString::number(id);
            case 1:
                return username;
            case 2:
                return password;
            case 3:
                return number;
            case 4:
                return email;
            case 5:
                return level;
            case 6:
                return QString::number(available);
            case 7:
                return forbidden_time;
            default:
                return "";
        }
    }


};


#endif //LOGIN_USER_H
