#include "Personaje.h"

Personaje::Personaje(QPixmap pixmap)
{
    this->imagen = pixmap;
}

void Personaje::setVidas(int value)
{
    Vidas = value;
}


int Personaje::getY()
{
    return this->y;
}

int Personaje::getVidas()
{
    return this->Vidas;
}

void Personaje::ubicarPersonaje(int dimension, Casillero ***&c, QLabel ***&labels)
{
    int x1=0, y1=0;
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

    c[this->x][this->y]->setDatos(true, false, false);
    // set a scaled pixmap to a w x h window keeping its aspect ratio
    this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
    labels[this->x][this->y]->setPixmap(this->imagen);


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
    if(e->key() == Qt::Key_D){
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
    if(e->key() == Qt::Key_A){
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
    if(e->key() == Qt::Key_W){
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
    if(e->key() == Qt::Key_S){
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
