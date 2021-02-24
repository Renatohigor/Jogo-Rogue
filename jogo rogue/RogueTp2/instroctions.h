#ifndef INSTROCTIONS_H
#define INSTROCTIONS_H

#include <QDialog>

namespace Ui {
class Instroctions;
}

class Instroctions : public QDialog
{
    Q_OBJECT

public:
    explicit Instroctions(QWidget *parent = 0);
    ~Instroctions();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Instroctions *ui;
};

#endif // INSTROCTIONS_H
