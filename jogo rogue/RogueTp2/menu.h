#ifndef MENU_H
#define MENU_H

#include <QDialog>
#include <QMediaPlayer>
namespace Ui {
class Menu;
}

class Menu : public QDialog
{
    Q_OBJECT

public:
    explicit Menu(QWidget *parent = 0);
    ~Menu();

private slots:
    // abre a contagem regressiva para o jogo iniciar
    void on_pushButton_clicked();
    //abre a tela de instruções
    void on_pushButton_2_clicked();
    //abre a tela de creditos
    void on_pushButton_3_clicked();

private:
    Ui::Menu *ui;
    QMediaPlayer *somM, *somButton;
};

#endif // MENU_H
