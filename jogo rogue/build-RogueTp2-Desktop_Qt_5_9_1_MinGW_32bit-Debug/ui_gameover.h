/********************************************************************************
** Form generated from reading UI file 'gameover.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEOVER_H
#define UI_GAMEOVER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_GameOver
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;

    void setupUi(QDialog *GameOver)
    {
        if (GameOver->objectName().isEmpty())
            GameOver->setObjectName(QStringLiteral("GameOver"));
        GameOver->resize(307, 218);
        GameOver->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        pushButton = new QPushButton(GameOver);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 120, 121, 61));
        pushButton->setStyleSheet(QLatin1String("\n"
"	background-color:#44c767;\n"
"	-moz-border-radius:28px;\n"
"	-webkit-border-radius:28px;\n"
"	border-radius:28px;\n"
"	border:1px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Georgia;\n"
"	font-size:15px;\n"
"	font-weight:bold;\n"
"	font-style:italic;\n"
"	padding:12px 31px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;\n"
"\n"
"\n"
""));
        pushButton_2 = new QPushButton(GameOver);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(160, 120, 121, 61));
        pushButton_2->setStyleSheet(QLatin1String("	background-color:#44c767;\n"
"	-moz-border-radius:28px;\n"
"	-webkit-border-radius:28px;\n"
"	border-radius:28px;\n"
"	border:1px solid #18ab29;\n"
"	display:inline-block;\n"
"	cursor:pointer;\n"
"	color:#ffffff;\n"
"	font-family:Georgia;\n"
"	font-size:15px;\n"
"	font-weight:bold;\n"
"	font-style:italic;\n"
"	padding:12px 31px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;\n"
"\n"
""));
        label = new QLabel(GameOver);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 10, 181, 91));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        retranslateUi(GameOver);

        QMetaObject::connectSlotsByName(GameOver);
    } // setupUi

    void retranslateUi(QDialog *GameOver)
    {
        GameOver->setWindowTitle(QApplication::translate("GameOver", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("GameOver", "Restart", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("GameOver", "Menu", Q_NULLPTR));
        label->setText(QApplication::translate("GameOver", "Game Over", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class GameOver: public Ui_GameOver {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEOVER_H
