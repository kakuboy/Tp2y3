#include "Personaje.h"

Personaje::Personaje(QPixmap pixmap)
{
    this->imagen = pixmap;
}

int Personaje::getX()
{
    return this->x;
}

int Personaje::getY()
{
    return this->y;
}

void Personaje::ubicarPersonaje(int dimension, Casillero ***&c, QLabel ***&labels)
{
    int x1 = 0, y1 = 0;
    bool ocupado = 0;

    while(ocupado != 1){
            x1 = 1 + rand() % (dimension);
            y1 = 1 + rand() % (dimension);
        if(c[x1][y1]->getLibre()){
            this->x = x1;
            this->y = y1;
            ocupado = 1;
        }
    }
    /*if(c[a][b]->getEnemigo()==true){
        c[a][b]->setDatos(true, false, true);
        // set a scaled pixmap to a w x h window keeping its aspect ratio
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[a][b]->setPixmap(this->imagen);
    }*/


    c[x1][y1]->setDatos(true, true, false);
    // set a scaled pixmap to a w x h window keeping its aspect ratio
    this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
    labels[x1][y1]->setPixmap(this->imagen);

}

void Personaje::setX(int x)
{
    this->x = x;
}

void Personaje::setY(int y)
{
    this->y = y;
}

void Personaje::moverPersonaje(QKeyEvent *e, Casillero ***&c, QLabel ***&labels)
{
    //Mover Jugador Derecha
    if(e->key() == Qt::Key_Right){
        if(c[this->x][this->y + 1]->getLibre() == true){
            QPixmap pixmap = labels[this->x][this->y + 1]->pixmap()->copy();
            labels[this->x][this->y + 1]->setPixmap(labels[this->x][this->y]->pixmap()->copy());
            labels[this->x][this->y]->setPixmap(pixmap);
            c[this->x][this->y + 1]->setDatos(true,false,true);
            c[this->x][this->y]->setDatos(false,false,true);

            this->y += 1;
        }
    }

    //Mover Jugador Izquierda
    if(e->key() == Qt::Key_Left){
        if(c[this->x][this->y - 1]->getLibre() == true){
            QPixmap pixmap = labels[this->x][this->y + 1]->pixmap()->copy();
            labels[this->x][this->y - 1]->setPixmap(labels[this->x][this->y]->pixmap()->copy());
            labels[this->x][this->y]->setPixmap(pixmap);
            c[this->x][this->y - 1]->setDatos(true,false,true);
            c[this->x][this->y]->setDatos(false,false,true);

            this->y -= 1;
        }
    }

    //Mover Jugador Arriba
    if(e->key() == Qt::Key_Up){
        if(c[this->x - 1][this->y]->getLibre() == true){
            QPixmap pixmap = labels[this->x - 1][this->y]->pixmap()->copy();
            labels[this->x - 1][this->y]->setPixmap(labels[this->x][this->y]->pixmap()->copy());
            labels[this->x][this->y]->setPixmap(pixmap);
            c[this->x - 1][this->y]->setDatos(true,false,true);
            c[this->x][this->y]->setDatos(false,false,true);

            this->x -= 1;
        }
    }

    //Mover Jugador Abajo
    if(e->key() == Qt::Key_Down){
        if(c[this->x + 1][this->y]->getLibre() == true){
            QPixmap pixmap = labels[this->x + 1][this->y]->pixmap()->copy();
            labels[this->x + 1][this->y]->setPixmap(labels[this->x][this->y]->pixmap()->copy());
            labels[this->x][this->y]->setPixmap(pixmap);
            c[this->x + 1][this->y]->setDatos(true,false,true);
            c[this->x][this->y]->setDatos(false,false,true);

            this->x += 1;
        }
    }
}
