/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QTableWidget *tableWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_TIME;
    QPushButton *pushButton;
    QLabel *label_8;
    QProgressBar *progressBar;
    QLabel *label_attack;
    QLabel *label_defense;
    QLabel *label_xp;
    QLabel *level;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(583, 587);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 30, 500, 500));
        tableWidget->setShowGrid(false);
        tableWidget->horizontalHeader()->setVisible(false);
        tableWidget->horizontalHeader()->setMinimumSectionSize(15);
        tableWidget->verticalHeader()->setVisible(false);
        tableWidget->verticalHeader()->setDefaultSectionSize(15);
        tableWidget->verticalHeader()->setMinimumSectionSize(15);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 0, 571, 31));
        label->setStyleSheet(QStringLiteral("font: italic 8pt \"Franklin Gothic Demi\";"));
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(510, 40, 47, 16));
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_2->setFont(font);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(510, 100, 47, 13));
        label_3->setFont(font);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(510, 160, 71, 16));
        label_4->setFont(font);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(510, 230, 61, 16));
        label_5->setFont(font);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(510, 310, 47, 13));
        label_6->setFont(font);
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(510, 390, 47, 13));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignCenter);
        label_TIME = new QLabel(centralWidget);
        label_TIME->setObjectName(QStringLiteral("label_TIME"));
        label_TIME->setGeometry(QRect(510, 410, 47, 51));
        QFont font1;
        font1.setPointSize(14);
        label_TIME->setFont(font1);
        label_TIME->setAlignment(Qt::AlignCenter);
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(420, 540, 131, 23));
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
"	text-shadow:0px 1px 0px #2f6627;"));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 546, 271, 20));
        QFont font2;
        font2.setPointSize(11);
        label_8->setFont(font2);
        progressBar = new QProgressBar(centralWidget);
        progressBar->setObjectName(QStringLiteral("progressBar"));
        progressBar->setGeometry(QRect(510, 60, 71, 23));
        progressBar->setValue(100);
        progressBar->setTextVisible(true);
        label_attack = new QLabel(centralWidget);
        label_attack->setObjectName(QStringLiteral("label_attack"));
        label_attack->setGeometry(QRect(510, 120, 47, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(true);
        font3.setWeight(75);
        label_attack->setFont(font3);
        label_attack->setAlignment(Qt::AlignCenter);
        label_defense = new QLabel(centralWidget);
        label_defense->setObjectName(QStringLiteral("label_defense"));
        label_defense->setGeometry(QRect(510, 182, 47, 41));
        label_defense->setFont(font3);
        label_defense->setAlignment(Qt::AlignCenter);
        label_xp = new QLabel(centralWidget);
        label_xp->setObjectName(QStringLiteral("label_xp"));
        label_xp->setGeometry(QRect(510, 252, 47, 41));
        label_xp->setFont(font3);
        label_xp->setAlignment(Qt::AlignCenter);
        level = new QLabel(centralWidget);
        level->setObjectName(QStringLiteral("level"));
        level->setGeometry(QRect(510, 342, 47, 31));
        level->setFont(font3);
        level->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "GAME ROGUE ", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "LIFE", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "ATTACK", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "DEFENSE", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "XP", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "LEVEL", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "TIME", Q_NULLPTR));
        label_TIME->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainWindow", "MENU", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Press \"p\" to pause", Q_NULLPTR));
        label_attack->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_defense->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        label_xp->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
        level->setText(QApplication::translate("MainWindow", "0", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
