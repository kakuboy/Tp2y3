#include "Enemigo.h"

Enemigo::Enemigo(QPixmap pixmap)
{

}

Enemigo::~Enemigo()
{

}


void Enemigo::ubicarEnemigo(int dimension, Casillero ***&c, QLabel ***&labels)
{
    int x1=0, y1=0;
    bool ocupado = 0;

    while(ocupado != 1){
            x1 = 1 + rand() % (dimension);
            y1 = 1 + rand() % (dimension);
        if(c[x1][y1]->getLibre()){
            this->xEnemigo = x1;
            this->yEnemigo = y1;
            ocupado = 1;

        }
  }
    c[this->xEnemigo][this->yEnemigo]->setDatos(true, false, false);
    // set a scaled pixmap to a w x h window keeping its aspect ratio
    this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
    labels[this->xEnemigo][this->yEnemigo]->setPixmap(this->imagen);


}
