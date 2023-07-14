#include <QApplication>
#include <QPushButton>
#include <QMessageBox>
#include "login.h"
#include "sqlite3.h"
#include "User.h"

sqlite3 *db=nullptr;

User* getuser(QString username);  //在数据库中查找用户

int main(int argc, char *argv[]) {

    QApplication a(argc, argv);
    Login login;
    login.show();

    //连接数据库
    QString path = "./data/info.db";
    int rc = sqlite3_open(path.toStdString().c_str(), &db);
    if (rc != SQLITE_OK) {
        QMessageBox::warning(&login, "warning", "数据库读取失败", QMessageBox::Yes);
        return 0;
    }

    return QApplication::exec();
}

User* getuser(QString username) {
    char *zErrMsg = 0;
    int row = 0;
    int column = 0;
    char **table = NULL;
    char sql[100];
    sprintf(sql,"select * from users where username = '%s';",username.toStdString().c_str());
    sqlite3_stmt *stmt;
    int rc = sqlite3_prepare_v2(db, sql, -1, &stmt, NULL);
    if (rc != SQLITE_OK) {
        return nullptr;
    }
    while (sqlite3_step(stmt) == SQLITE_ROW) {
        int id = sqlite3_column_int(stmt, 0);
        QString username = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 1));
        QString password = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 2));
        QString number = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 3));
        QString email = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 4));
        QString level = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 5));
        int available = sqlite3_column_int(stmt, 6);
        QString forbidden_time = QString::fromLocal8Bit((char*)sqlite3_column_text(stmt, 7));
        User* user = new User(id,username,password,number,email,level,available,forbidden_time);
        return user;
    }

}