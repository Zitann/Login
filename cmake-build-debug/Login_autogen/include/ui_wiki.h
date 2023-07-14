/********************************************************************************
** Form generated from reading UI file 'wiki.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIKI_H
#define UI_WIKI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Wiki
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *frame;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_6;
    QWidget *min;
    QWidget *close;
    QTabWidget *tabWidget;
    QWidget *info;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QGridLayout *gridLayout;
    QPushButton *change;
    QLineEdit *username;
    QLabel *label_5;
    QLabel *label_4;
    QLineEdit *password;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_7;
    QLineEdit *number;
    QLabel *label_3;
    QLabel *label_6;
    QLineEdit *emil;
    QLineEdit *level;
    QWidget *manage;
    QVBoxLayout *verticalLayout_3;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QLabel *label_10;
    QPushButton *change_4;
    QLineEdit *username_2;
    QPushButton *change_2;
    QLineEdit *number_2;
    QLabel *label_8;
    QLineEdit *password_2;
    QLabel *label_11;
    QLineEdit *emil_2;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *change_3;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_12;
    QLineEdit *level_2;
    QWidget *widget_2;
    QWidget *widget_3;
    QWidget *widget_4;
    QWidget *widget_5;

    void setupUi(QWidget *Wiki)
    {
        if (Wiki->objectName().isEmpty())
            Wiki->setObjectName(QString::fromUtf8("Wiki"));
        Wiki->resize(417, 353);
        verticalLayout = new QVBoxLayout(Wiki);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(-1, -1, 9, -1);
        frame = new QFrame(Wiki);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setMinimumSize(QSize(399, 335));
        frame->setMaximumSize(QSize(399, 335));
        frame->setStyleSheet(QString::fromUtf8("QFrame#frame {\n"
"	background:rgb(192, 37, 27) ;\n"
"	border-radius: 20px;\n"
"}\n"
""));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        frame_4 = new QFrame(frame);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setGeometry(QRect(200, 10, 171, 38));
        frame_4->setMinimumSize(QSize(171, 38));
        frame_4->setMaximumSize(QSize(171, 38));
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

        min = new QWidget(frame_4);
        min->setObjectName(QString::fromUtf8("min"));
        min->setMinimumSize(QSize(21, 21));
        min->setMaximumSize(QSize(21, 21));
        min->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	image:url(:/image/image/min.png)\n"
"}"));

        horizontalLayout_6->addWidget(min);

        close = new QWidget(frame_4);
        close->setObjectName(QString::fromUtf8("close"));
        close->setMinimumSize(QSize(21, 21));
        close->setMaximumSize(QSize(21, 21));
        close->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	image:url(:/image/image/close.png)\n"
"}"));

        horizontalLayout_6->addWidget(close);

        tabWidget = new QTabWidget(frame);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(30, 10, 341, 311));
        tabWidget->setMinimumSize(QSize(341, 311));
        tabWidget->setMaximumSize(QSize(341, 311));
        tabWidget->setStyleSheet(QString::fromUtf8("QTabBar::tab{\n"
"	background:rgb(255, 255, 255);\n"
"	border-radius:10px;\n"
"	width:81px;\n"
"	height:38px\n"
"}\n"
"QTabWidget {\n"
"	border:none;\n"
"}"));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setUsesScrollButtons(true);
        tabWidget->setMovable(false);
        info = new QWidget();
        info->setObjectName(QString::fromUtf8("info"));
        info->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_2 = new QVBoxLayout(info);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_2 = new QFrame(info);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setEnabled(true);
        frame_2->setMinimumSize(QSize(321, 250));
        frame_2->setMaximumSize(QSize(321, 250));
        frame_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setHorizontalSpacing(2);
        gridLayout->setVerticalSpacing(6);
        gridLayout->setContentsMargins(-1, -1, 15, -1);
        change = new QPushButton(frame_2);
        change->setObjectName(QString::fromUtf8("change"));
        change->setMinimumSize(QSize(81, 31));
        change->setMaximumSize(QSize(81, 31));
        QFont font;
        font.setBold(true);
        change->setFont(font);
        change->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(change, 5, 1, 1, 2);

        username = new QLineEdit(frame_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(161, 31));
        username->setMaximumSize(QSize(161, 31));
        username->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(username, 0, 2, 1, 2);

        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(81, 31));
        label_5->setMaximumSize(QSize(81, 31));
        label_5->setFont(font);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 2, 0, 1, 2);

        label_4 = new QLabel(frame_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(81, 31));
        label_4->setMaximumSize(QSize(81, 31));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 1, 0, 1, 2);

        password = new QLineEdit(frame_2);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(161, 31));
        password->setMaximumSize(QSize(161, 31));
        password->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(password, 1, 2, 1, 2);

        horizontalSpacer = new QSpacerItem(34, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 5, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(97, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 5, 3, 1, 1);

        label_7 = new QLabel(frame_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(81, 31));
        label_7->setMaximumSize(QSize(81, 31));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 2);

        number = new QLineEdit(frame_2);
        number->setObjectName(QString::fromUtf8("number"));
        number->setMinimumSize(QSize(161, 31));
        number->setMaximumSize(QSize(161, 31));
        number->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(number, 2, 2, 1, 2);

        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(81, 31));
        label_3->setMaximumSize(QSize(81, 31));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 0, 0, 1, 2);

        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(81, 31));
        label_6->setMaximumSize(QSize(81, 31));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 3, 0, 1, 2);

        emil = new QLineEdit(frame_2);
        emil->setObjectName(QString::fromUtf8("emil"));
        emil->setMinimumSize(QSize(161, 31));
        emil->setMaximumSize(QSize(161, 31));
        emil->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(emil, 3, 2, 1, 2);

        level = new QLineEdit(frame_2);
        level->setObjectName(QString::fromUtf8("level"));
        level->setMinimumSize(QSize(161, 31));
        level->setMaximumSize(QSize(161, 31));
        level->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout->addWidget(level, 4, 2, 1, 2);


        verticalLayout_2->addWidget(frame_2);

        tabWidget->addTab(info, QString());
        manage = new QWidget();
        manage->setObjectName(QString::fromUtf8("manage"));
        verticalLayout_3 = new QVBoxLayout(manage);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        widget = new QWidget(manage);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(321, 250));
        widget->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(-1, -1, 29, -1);
        label_9 = new QLabel(widget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(81, 31));
        label_9->setMaximumSize(QSize(81, 31));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_9, 2, 0, 1, 2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_4, 7, 3, 1, 1);

        label_10 = new QLabel(widget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(81, 31));
        label_10->setMaximumSize(QSize(81, 31));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_10, 1, 0, 1, 2);

        change_4 = new QPushButton(widget);
        change_4->setObjectName(QString::fromUtf8("change_4"));
        change_4->setMinimumSize(QSize(81, 31));
        change_4->setMaximumSize(QSize(81, 31));
        change_4->setFont(font);
        change_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(change_4, 7, 4, 1, 1);

        username_2 = new QLineEdit(widget);
        username_2->setObjectName(QString::fromUtf8("username_2"));
        username_2->setMinimumSize(QSize(100, 31));
        username_2->setMaximumSize(QSize(161, 31));
        username_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(username_2, 0, 2, 1, 2);

        change_2 = new QPushButton(widget);
        change_2->setObjectName(QString::fromUtf8("change_2"));
        change_2->setMinimumSize(QSize(81, 31));
        change_2->setMaximumSize(QSize(81, 31));
        change_2->setFont(font);
        change_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(change_2, 0, 4, 1, 2);

        number_2 = new QLineEdit(widget);
        number_2->setObjectName(QString::fromUtf8("number_2"));
        number_2->setMinimumSize(QSize(181, 31));
        number_2->setMaximumSize(QSize(177, 31));
        number_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(number_2, 2, 2, 1, 4);

        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(81, 31));
        label_8->setMaximumSize(QSize(81, 31));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_8, 0, 0, 1, 2);

        password_2 = new QLineEdit(widget);
        password_2->setObjectName(QString::fromUtf8("password_2"));
        password_2->setMinimumSize(QSize(181, 31));
        password_2->setMaximumSize(QSize(177, 31));
        password_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(password_2, 1, 2, 1, 4);

        label_11 = new QLabel(widget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(81, 31));
        label_11->setMaximumSize(QSize(81, 31));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_11, 3, 0, 1, 2);

        emil_2 = new QLineEdit(widget);
        emil_2->setObjectName(QString::fromUtf8("emil_2"));
        emil_2->setMinimumSize(QSize(181, 31));
        emil_2->setMaximumSize(QSize(177, 31));
        emil_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(emil_2, 3, 2, 1, 4);

        horizontalSpacer_5 = new QSpacerItem(24, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_5, 7, 5, 1, 1);

        change_3 = new QPushButton(widget);
        change_3->setObjectName(QString::fromUtf8("change_3"));
        change_3->setMinimumSize(QSize(81, 31));
        change_3->setMaximumSize(QSize(81, 31));
        change_3->setFont(font);
        change_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(change_3, 7, 1, 1, 2);

        horizontalSpacer_3 = new QSpacerItem(54, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_3, 7, 0, 1, 1);

        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(81, 31));
        label_12->setMaximumSize(QSize(81, 31));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	background: rgb(255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_12, 4, 0, 1, 1);

        level_2 = new QLineEdit(widget);
        level_2->setObjectName(QString::fromUtf8("level_2"));
        level_2->setMinimumSize(QSize(181, 31));
        level_2->setMaximumSize(QSize(177, 31));
        level_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgba(255, 255, 255, 255);\n"
"	border-radius: 10px;\n"
"}"));

        gridLayout_2->addWidget(level_2, 4, 2, 1, 2);


        verticalLayout_3->addWidget(widget);

        tabWidget->addTab(manage, QString());
        widget_2 = new QWidget(frame);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(28, 48, 13, 273));
        widget_2->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));
        widget_3 = new QWidget(frame);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(358, 48, 14, 273));
        widget_3->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));
        widget_4 = new QWidget(frame);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(35, 48, 328, 14));
        widget_4->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));
        widget_5 = new QWidget(frame);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(38, 307, 328, 16));
        widget_5->setStyleSheet(QString::fromUtf8("QWidget{\n"
"	background:rgb(192, 37, 27)\n"
"}"));

        verticalLayout->addWidget(frame);


        retranslateUi(Wiki);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(Wiki);
    } // setupUi

    void retranslateUi(QWidget *Wiki)
    {
        Wiki->setWindowTitle(QCoreApplication::translate("Wiki", "Wiki", nullptr));
        change->setText(QCoreApplication::translate("Wiki", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_5->setText(QCoreApplication::translate("Wiki", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_4->setText(QCoreApplication::translate("Wiki", "\345\257\206\347\240\201", nullptr));
        label_7->setText(QCoreApplication::translate("Wiki", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        label_3->setText(QCoreApplication::translate("Wiki", "\350\264\246\346\210\267\345\220\215", nullptr));
        label_6->setText(QCoreApplication::translate("Wiki", "\351\202\256\347\256\261", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(info), QCoreApplication::translate("Wiki", "\347\224\250\346\210\267\344\277\241\346\201\257", nullptr));
        label_9->setText(QCoreApplication::translate("Wiki", "\346\211\213\346\234\272\345\217\267", nullptr));
        label_10->setText(QCoreApplication::translate("Wiki", "\345\257\206\347\240\201", nullptr));
        change_4->setText(QCoreApplication::translate("Wiki", "\345\210\240\351\231\244", nullptr));
        change_2->setText(QCoreApplication::translate("Wiki", "\346\237\245\346\211\276", nullptr));
        label_8->setText(QCoreApplication::translate("Wiki", "\350\264\246\346\210\267\345\220\215", nullptr));
        label_11->setText(QCoreApplication::translate("Wiki", "\351\202\256\347\256\261", nullptr));
        change_3->setText(QCoreApplication::translate("Wiki", "\347\241\256\350\256\244\344\277\256\346\224\271", nullptr));
        label_12->setText(QCoreApplication::translate("Wiki", "\347\224\250\346\210\267\346\235\203\351\231\220", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(manage), QCoreApplication::translate("Wiki", "\347\224\250\346\210\267\347\256\241\347\220\206", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Wiki: public Ui_Wiki {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIKI_H
