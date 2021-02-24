/********************************************************************************
** Form generated from reading UI file 'timetostart.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIMETOSTART_H
#define UI_TIMETOSTART_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_TimeToStart
{
public:
    QLabel *label;
    QLabel *label_TimeToStart;

    void setupUi(QDialog *TimeToStart)
    {
        if (TimeToStart->objectName().isEmpty())
            TimeToStart->setObjectName(QStringLiteral("TimeToStart"));
        TimeToStart->resize(400, 300);
        TimeToStart->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        label = new QLabel(TimeToStart);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 30, 191, 51));
        QFont font;
        font.setPointSize(14);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);
        label_TimeToStart = new QLabel(TimeToStart);
        label_TimeToStart->setObjectName(QStringLiteral("label_TimeToStart"));
        label_TimeToStart->setGeometry(QRect(126, 100, 151, 151));
        QFont font1;
        font1.setPointSize(48);
        label_TimeToStart->setFont(font1);
        label_TimeToStart->setAlignment(Qt::AlignCenter);

        retranslateUi(TimeToStart);

        QMetaObject::connectSlotsByName(TimeToStart);
    } // setupUi

    void retranslateUi(QDialog *TimeToStart)
    {
        TimeToStart->setWindowTitle(QApplication::translate("TimeToStart", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("TimeToStart", "The game will start in", Q_NULLPTR));
        label_TimeToStart->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class TimeToStart: public Ui_TimeToStart {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIMETOSTART_H
