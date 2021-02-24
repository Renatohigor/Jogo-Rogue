#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "GameObject.h"
#include <QMainWindow>
#include "listwall.h"
#include <QMediaPlayer>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void moveEnemy(); //metodo mover Enemys
    void keyPressEvent(QKeyEvent *event); //mover Hero
    void damageEnemy(); //dano do inimigo ao player
    void peekUpTreasure(); //eventos ao pegar tesouro
    void cronometro(); //conta o tempo de jogo do player
    void statusHero(); //mostra e atualiza os status do player
    void newScenario(); //cria o cenario novamente

    void on_pushButton_clicked(); //Abre o menu

private:
    Ui::MainWindow *ui;
    List * wList; //arrays
    QTimer *timer, *timerTwo; //time
    QMediaPlayer * som, *somT, *somDano, *somWalk, *somPass; //musicas e toques
};

#endif // MAINWINDOW_H
