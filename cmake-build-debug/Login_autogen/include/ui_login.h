/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Login
{
public:
    QHBoxLayout *horizontalLayout;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *min;
    QPushButton *close;
    QFrame *frame_2;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_3;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QFrame *frame_5;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QLabel *mode;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_4;
    QWidget *widget_3;
    QLineEdit *username;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_5;
    QWidget *widget_5;
    QLineEdit *password;
    QPushButton *see;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *login;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label;
    QPushButton *signup;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Login)
    {
        if (Login->objectName().isEmpty())
            Login->setObjectName(QString::fromUtf8("Login"));
        Login->resize(400, 509);
        horizontalLayout = new QHBoxLayout(Login);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        frame = new QFrame(Login);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"	background:rgb(192, 37, 27) ;\n"
"	border-radius: 20px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setStyleSheet(QString::fromUtf8("QFrame#frame_4{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_6 = new QHBoxLayout(frame_4);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_6 = new QSpacerItem(289, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_6);

        min = new QPushButton(frame_4);
        min->setObjectName(QString::fromUtf8("min"));
        min->setMinimumSize(QSize(21, 21));
        min->setMaximumSize(QSize(21, 21));
        min->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image:url(./image/min.png);\n"
"	background:rgba(0,0,0,0)\n"
"}"));

        horizontalLayout_6->addWidget(min);

        close = new QPushButton(frame_4);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(21, 21));
        close->setMaximumSize(QSize(21, 21));
        close->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	image:url(./image/close.png);\n"
"	background:rgba(0,0,0,0)\n"
"}"));

        horizontalLayout_6->addWidget(close);

        close->raise();
        min->raise();

        verticalLayout->addWidget(frame_4);

        frame_2 = new QFrame(frame);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	border:none\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        verticalLayout_2 = new QVBoxLayout(frame_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_3 = new QFrame(frame_2);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setStyleSheet(QString::fromUtf8("QFrame#frame_3\n"
"{\n"
"	image:url(./image/background.png)\n"
"	\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_3);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        frame_5 = new QFrame(frame_3);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setStyleSheet(QString::fromUtf8("QFrame#frame_5{\n"
"	background:rgba(154, 154, 154, 100)\n"
"}\n"
"QFrame{\n"
"	background:rgb(169, 107, 103)\n"
"}"));
        frame_5->setFrameShape(QFrame::StyledPanel);
        frame_5->setFrameShadow(QFrame::Raised);
        verticalLayout_3 = new QVBoxLayout(frame_5);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(-1, -1, 6, -1);
        widget = new QWidget(frame_5);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("QWidget#widget\n"
"{\n"
"	image:url(./image/logo.png)\n"
"}"));

        verticalLayout_3->addWidget(widget);

        mode = new QLabel(frame_5);
        mode->setObjectName(QString::fromUtf8("mode"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        mode->setFont(font);
        mode->setStyleSheet(QString::fromUtf8("QLabel#mode{\n"
"	background:rgba(255, 255, 255, 0);\n"
"	color:rgb(255, 255, 255)\n"
"}"));
        mode->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(mode);

        widget_2 = new QWidget(frame_5);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 130);\n"
"	border-radius: 10px;\n"
"}"));
        horizontalLayout_4 = new QHBoxLayout(widget_2);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setMinimumSize(QSize(31, 31));
        widget_3->setMaximumSize(QSize(31, 31));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	image:url(./image/username.png)\n"
"}"));

        horizontalLayout_4->addWidget(widget_3);

        username = new QLineEdit(widget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(201, 31));
        username->setMaximumSize(QSize(201, 31));
        username->setStyleSheet(QString::fromUtf8("QLineEdit{background:rgba(255, 255, 255, 0);}"));
        username->setFrame(false);

        horizontalLayout_4->addWidget(username);


        verticalLayout_3->addWidget(widget_2);

        widget_4 = new QWidget(frame_5);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 130);\n"
"	border-radius: 10px;\n"
"}"));
        horizontalLayout_5 = new QHBoxLayout(widget_4);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        widget_5 = new QWidget(widget_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setMinimumSize(QSize(31, 31));
        widget_5->setMaximumSize(QSize(31, 31));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	image:url(./image/password.png)\n"
"}"));

        horizontalLayout_5->addWidget(widget_5);

        password = new QLineEdit(widget_4);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(164, 31));
        password->setMaximumSize(QSize(164, 31));
        password->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	background:rgba(255, 255, 255, 0);\n"
"}\n"
"QLineEdit[echoMode=\"2\"]{\n"
"    lineedit-password-character: 42; // 42\350\241\250\347\244\272*\345\217\267\n"
"    // \350\256\276\347\275\256\345\205\266\344\273\226\346\240\267\345\274\217\345\261\236\346\200\247\n"
"}\n"
""));
        password->setFrame(false);
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_5->addWidget(password);

        see = new QPushButton(widget_4);
        see->setObjectName(QString::fromUtf8("see"));
        see->setMinimumSize(QSize(31, 31));
        see->setMaximumSize(QSize(31, 31));
        see->setStyleSheet(QString::fromUtf8("image:url(./image/see.png)"));

        horizontalLayout_5->addWidget(see);


        verticalLayout_3->addWidget(widget_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_2);

        login = new QPushButton(frame_5);
        login->setObjectName(QString::fromUtf8("login"));
        QFont font1;
        font1.setPointSize(20);
        font1.setBold(true);
        login->setFont(font1);
        login->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:rgb(154, 154, 154);\n"
"	color:rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}\n"
"QPushBotton:hover{\n"
"	background:rgba(175, 34, 25,180);\n"
"}"));

        verticalLayout_3->addWidget(login);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        label = new QLabel(frame_5);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font2;
        font2.setBold(true);
        label->setFont(font2);
        label->setStyleSheet(QString::fromUtf8("QLabel#label{\n"
"	background:rgba(0,0,0,0);\n"
"	color:rgb(255, 255, 255);\n"
"}"));

        horizontalLayout_3->addWidget(label);

        signup = new QPushButton(frame_5);
        signup->setObjectName(QString::fromUtf8("signup"));
        signup->setFont(font2);
        signup->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background:rgba(255, 255, 255, 0);\n"
"	color:rgb(255, 255, 255);\n"
"}\n"
"QPushBotton:hover{\n"
"	color:rgb(192, 37, 27);\n"
"}"));

        horizontalLayout_3->addWidget(signup);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        horizontalLayout_3->setStretch(1, 1);
        horizontalLayout_3->setStretch(2, 1);

        verticalLayout_3->addLayout(horizontalLayout_3);

        verticalLayout_3->setStretch(0, 2);
        verticalLayout_3->setStretch(1, 1);

        gridLayout->addWidget(frame_5, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(25, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 1);
        gridLayout->setRowStretch(1, 32);
        gridLayout->setRowStretch(2, 1);
        gridLayout->setColumnStretch(0, 1);
        gridLayout->setColumnStretch(1, 9);
        gridLayout->setColumnStretch(2, 1);

        verticalLayout_2->addWidget(frame_3);


        verticalLayout->addWidget(frame_2);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 10);

        horizontalLayout->addWidget(frame);

        QWidget::setTabOrder(password, login);
        QWidget::setTabOrder(login, signup);
        QWidget::setTabOrder(signup, min);
        QWidget::setTabOrder(min, close);
        QWidget::setTabOrder(close, username);

        retranslateUi(Login);

        QMetaObject::connectSlotsByName(Login);
    } // setupUi

    void retranslateUi(QWidget *Login)
    {
        Login->setWindowTitle(QCoreApplication::translate("Login", "Login", nullptr));
        min->setText(QString());
        close->setText(QString());
        mode->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        see->setText(QString());
        login->setText(QCoreApplication::translate("Login", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("Login", "\346\262\241\346\234\211\350\264\246\346\210\267\357\274\237", nullptr));
        signup->setText(QCoreApplication::translate("Login", "\347\202\271\345\207\273\346\263\250\345\206\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Login: public Ui_Login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
