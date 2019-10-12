#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <stdlib.h>
//#include <time.h>
#include <QLabel>
#include <QTimer>
#include <QMessageBox>
#include <QKeyEvent>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->inicializarMatriz();
    time_elapsed = new QTime();  //Para calcular el tiempo pasado en el juego
    timer=new QTimer(this);
    time_elapsed->start();
    timer->start();

    time_label=new QLabel(this);
    time_label->move(100,550);
    time_label->setStyleSheet("background-color:white;padding-left:20px;");
    time_label->setFont(QFont("digital-7",20,2,false));

    QObject::connect(timer,SIGNAL(timeout()),this,SLOT(actualizarTiempo()));

}


void MainWindow::actualizarTiempo()
{
    int secs = time_elapsed->elapsed() / 1000;
    int mins = (secs / 60) % 60;
    secs = secs % 60;
    time_label->setText(QString("%1:%2").arg(mins, 2, 10, QLatin1Char('0')).arg(secs, 2, 10, QLatin1Char('0')) );

    ui->puntaje2->setText(QString::number(secs/10));
}


void MainWindow::inicializarMatriz() {
    //En el ejemplo voy usando dim = 30
    this->dim = 30;

    srand(time(nullptr));
    this->laberinto = new int*[dim];

    //this->matrizmadre = new MatrizMadre();

    //matrizmadre->generarMatrizAleatoria(this->laberinto, dim, dim);

    for (int i = 0; i < dim; i++) {
        this->laberinto[i] = new int[dim];
        for (int j = 0; j < dim; j++) {
            this->laberinto[i][j] = rand() % 2;
        }
    }

    this->labels = new QLabel**[dim];
    for (int i = 0; i < dim; i++) {
        this->labels[i] = new QLabel*[dim];
        for (int j = 0; j < dim; j++) {

                this->labels[i][j] = new QLabel();
                this->labels[i][j]->setBackgroundRole(QPalette::Dark);
                this->labels[i][j]->setScaledContents(true);

                this->labels[i][j]->setFixedSize(17,17);
                this->labels[i][j]->setText(" ");
                this->ui->gridLayout->addWidget(labels[i][j] ,i,j);
        }

    }

    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            if (this->getValorMatriz(i,j)) {
                QPixmap pix("C:/Users/JOAKO/Desktop/TP quirolo/TP Nº2y3/TPN3y2/pared.png");

                // set a scaled pixmap to a w x h window keeping its aspect ratio
                pix = pix.scaled(17,17,Qt::KeepAspectRatio);
                this->labels[i][j]->setPixmap(pix);

            } else {
                QPixmap pix("C:/Users/JOAKO/Desktop/TP quirolo/TP Nº2y3/TPN3y2/piso.png");

                // set a scaled pixmap to a w x h window keeping its aspect ratio
                pix = pix.scaled(17,17,Qt::KeepAspectRatio);
                this->labels[i][j]->setPixmap(pix);
            }
        }
     }

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::keyPressEvent(QKeyEvent *e) {

    this->player->moverPersonaje(e,this->casilla,this->labels);

}

/**
 * Esta función debe retornar el valor de la matriz de mapas en la posición i , j
 * Yo retorno un valor aleatorio, pero ustedes tienen que usar la función del tp1.
 */
int MainWindow::getValorMatriz(int i, int j) {
    //return rand() % 2;
    return laberinto[i][j];
}

void MainWindow::incializarPersonaje()
{
    QPixmap pixmap("C:/Users/JOAKO/Desktop/TP quirolo/TP Nº2y3/TPN3y2/personaje.jpg");
    pixmap = pixmap.scaled(25,25,Qt::KeepAspectRatio);
    this->player = new Personaje(pixmap);
    this->player->ubicarPersonaje(this->dim + 2, this->casilla, this->labels);
}
