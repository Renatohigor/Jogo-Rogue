/********************************************************************************
** Form generated from reading UI file 'menu.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_H
#define UI_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Menu
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QDialog *Menu)
    {
        if (Menu->objectName().isEmpty())
            Menu->setObjectName(QStringLiteral("Menu"));
        Menu->resize(263, 263);
        Menu->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        label = new QLabel(Menu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 241, 91));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        label->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(Menu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(70, 110, 121, 23));
        pushButton->setStyleSheet(QLatin1String("\n"
"	background-color:#44c767;\n"
"	-moz-border-radius:28px;\n"
"	-webkit-border-radius:28px;\n"
"	border-radius:28px;\n"
"	border:1px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:17px;\n"
"	padding:16px 31px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;\n"
""));
        pushButton_2 = new QPushButton(Menu);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(50, 150, 161, 23));
        pushButton_2->setStyleSheet(QLatin1String("\n"
"	background-color:#44c767;\n"
"	-moz-border-radius:28px;\n"
"	-webkit-border-radius:28px;\n"
"	border-radius:28px;\n"
"	border:1px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:17px;\n"
"	padding:16px 31px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;\n"
"\n"
""));
        pushButton_3 = new QPushButton(Menu);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(70, 190, 121, 23));
        pushButton_3->setStyleSheet(QLatin1String("\n"
"	background-color:#44c767;\n"
"	-moz-border-radius:28px;\n"
"	-webkit-border-radius:28px;\n"
"	border-radius:28px;\n"
"	border:1px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Arial;\n"
"	font-size:17px;\n"
"	padding:16px 31px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;"));

        retranslateUi(Menu);

        QMetaObject::connectSlotsByName(Menu);
    } // setupUi

    void retranslateUi(QDialog *Menu)
    {
        Menu->setWindowTitle(QApplication::translate("Menu", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Menu", "Game Rogue", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Menu", "Start", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("Menu", "Instroctions", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("Menu", "Credts", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Menu: public Ui_Menu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_H
