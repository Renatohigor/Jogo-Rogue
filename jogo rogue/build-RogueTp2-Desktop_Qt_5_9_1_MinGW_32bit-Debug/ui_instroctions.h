/********************************************************************************
** Form generated from reading UI file 'instroctions.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INSTROCTIONS_H
#define UI_INSTROCTIONS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Instroctions
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QDialog *Instroctions)
    {
        if (Instroctions->objectName().isEmpty())
            Instroctions->setObjectName(QStringLiteral("Instroctions"));
        Instroctions->resize(441, 331);
        Instroctions->setStyleSheet(QStringLiteral("background-color: rgb(170, 170, 127);"));
        textBrowser = new QTextBrowser(Instroctions);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(20, 10, 391, 361));
        pushButton = new QPushButton(Instroctions);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(140, 260, 161, 31));
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
"	padding:7px 40px;\n"
"	text-decoration:none;\n"
"	text-shadow:0px 1px 0px #2f6627;\n"
""));

        retranslateUi(Instroctions);

        QMetaObject::connectSlotsByName(Instroctions);
    } // setupUi

    void retranslateUi(QDialog *Instroctions)
    {
        Instroctions->setWindowTitle(QApplication::translate("Instroctions", "Dialog", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("Instroctions", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Instru\303\247\303\265es do jogo Rogue.</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Mover Heroi: \342\206\221, \342\206\220, \342\206\223, \342\206\222</span></p>\n"
"<p align=\"ce"
                        "nter\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\"> </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Objetivos: Recolher todos os tesouros para aumentar XP e as habilidades do heroi. </span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">Ao pegar todos os tesouros liberar\303\241 mais tesouros e mostros mais fortes.</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:12pt;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; te"
                        "xt-indent:0px;\"><span style=\" font-size:12pt;\">O jogo se baseia no tempo que voce conseguira ficar vivo e o nivel maxino que conseguir chegar. </span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Instroctions", "Voltar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Instroctions: public Ui_Instroctions {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INSTROCTIONS_H
