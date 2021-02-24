#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setRowCount(15);
    ui->tableWidget->setColumnCount(15);

    for(int i = 0; i < 15; i++)
        for(int j = 0; j < 15; j++)
            ui->tableWidget->setItem(i, j, new QTableWidgetItem(" "));
    ui->tableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_pushButton_Print_clicked()
{
    QString dados, saida;
    ui->textEdit_print->append("Wall:");
    for (int i = 0; i < 15; ++i)
    {
        for(int j = 0; j < 15; ++j)
        {
            dados = ui->tableWidget->item(i, j)->text();
            if(dados == "W"){
                saida = "matrix01[" + QString::number(i) + "][" + QString::number(j) + "] = " + dados + ";";
                ui->textEdit_print->append(saida);
            }
        }
    }

    ui->textEdit_print->append("Enemy:");
    for (int i = 0; i < 15; ++i)
    {
        for(int j = 0; j < 15; ++j)
        {
            dados = ui->tableWidget->item(i, j)->text();
            if(dados == "E"){
                saida = "matrix00x[" + QString::number(i) + "][" + QString::number(j) + "] = " + dados + ";";
                ui->textEdit_print->append(saida);
            }
        }
    }

    ui->textEdit_print->append("Treasure:");
    for (int i = 0; i < 15; ++i)
    {
        for(int j = 0; j < 15; ++j)
        {
            dados = ui->tableWidget->item(i, j)->text();
            if(dados == "T"){
                saida = "matrix00x[" + QString::number(i) + "][" + QString::number(j) + "] = " + dados + ";";
                ui->textEdit_print->append(saida);
            }
        }
    }
}
