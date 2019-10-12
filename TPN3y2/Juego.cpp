#include "Juego.h"

void Juego::actualizarTiempo()
{
    int secs = time_elapsed->elapsed() / 1000;
    int mins = (secs / 60) % 60;
    secs = secs % 60;
    time_label->setText(QString("%1:%2").arg(mins, 2, 10, QLatin1Char('0')).arg(secs, 2, 10, QLatin1Char('0')) );
}

Juego::Juego()
{
    time_elapsed = new QTime();  //Pour calculer le temps passer dans le jeu
    timer=new QTimer(this);
    time_elapsed->start();
    timer->start();

    time_label=new QLabel(this);
    time_label->move(635,70);
    time_label->setStyleSheet("background-color:white;padding-left:20px;");
    time_label->setFont(QFont("digital-7",20,2,false));

    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(update_time()));
}
