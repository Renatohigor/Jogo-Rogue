#ifndef TIMETOSTART_H
#define TIMETOSTART_H

#include <QDialog>
#include <QTime>
namespace Ui {
class TimeToStart;
}

class TimeToStart : public QDialog
{
    Q_OBJECT

public:
    explicit TimeToStart(QWidget *parent = 0);
    ~TimeToStart();
private slots:
    void timeToStartGame();

private:
    Ui::TimeToStart *ui;
    QTimer * timerStart;
};

#endif // TIMETOSTART_H
