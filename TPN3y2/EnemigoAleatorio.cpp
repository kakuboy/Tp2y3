#include "EnemigoAleatorio.h"

EnemigoAleatorio::EnemigoAleatorio(QPixmap pixmap) : Enemigo (pixmap)
{

}

void EnemigoAleatorio::moverEnemigo(int l , int k , Casillero ***&casilla, QLabel ***&labels)
{  int j=1+rand()%4;
   switch(j)
   {
   case 1 : if(casilla[k][l+1]->getLibre())//derecha
              {l++;
           casilla[k][l]->setDatos(false, true, false);
           this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
           labels[k][l]->setPixmap(this->imagen);
       }
           else {
           if(casilla[k][l-1]->getLibre())
               {l--;
               casilla[k][l]->setDatos(false, true, false);
               this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
               labels[k][l]->setPixmap(this->imagen);}
                else
               if(casilla[k+1][l]->getLibre())
                   {k++;
                   casilla[k][l]->setDatos(false, true, false);
                   this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                   labels[k][l]->setPixmap(this->imagen);}
                else
               {k--;
                   casilla[k][l]->setDatos(false, true, false);
                   this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                   labels[k][l]->setPixmap(this->imagen);}}
       break;
   case 2 : if(casilla[k][l-1]->getLibre())//izquierda
               {l--;
           casilla[k][l]->setDatos(false, true, false);
           this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
           labels[k][l]->setPixmap(this->imagen);}
            else {
            if(casilla[k][l+1]->getLibre())
                {l++;
                casilla[k][l]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k][l]->setPixmap(this->imagen);}
                 else
                if(casilla[k+1][l]->getLibre())
                    {k++;
                    casilla[k][l]->setDatos(false, true, false);
                    this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                    labels[k][l]->setPixmap(this->imagen);}
                 else
                {k--;
                    casilla[k][l]->setDatos(false, true, false);
                    this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                    labels[k][l]->setPixmap(this->imagen);}}
    break;
   case 3 : if(casilla[k+1][l]->getLibre())//abajo
                {k++;
           casilla[k][l]->setDatos(false, true, false);
           this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
           labels[k][l]->setPixmap(this->imagen);}
             else {
             if(casilla[k-1][l]->getLibre())
                 {k--;
                 casilla[k][l]->setDatos(false, true, false);
                 this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                 labels[k][l]->setPixmap(this->imagen);}
                  else
                 if(casilla[k][l+1]->getLibre())
                     {l++;
                     casilla[k][l]->setDatos(false, true, false);
                     this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                     labels[k][l]->setPixmap(this->imagen);}
                  else
                 {l--;
                     casilla[k][l]->setDatos(false, true, false);
                     this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                     labels[k][l]->setPixmap(this->imagen);}}

    break;
   case 4 : if(casilla[k-1][l]->getLibre())//arriba
                 {k--;
           casilla[k][l]->setDatos(false, true, false);
           this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
           labels[k][l]->setPixmap(this->imagen);}
              else {
              if(casilla[k+1][l]->getLibre())
                  {k++;
                  casilla[k][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k][l]->setPixmap(this->imagen);}
                   else
                  if(casilla[k][l+1]->getLibre())
                      {l++;
                      casilla[k][l]->setDatos(false, true, false);
                      this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                      labels[k][l]->setPixmap(this->imagen);}
                   else
                  {l--;
                      casilla[k][l]->setDatos(false, true, false);
                      this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                      labels[k][l]->setPixmap(this->imagen);}}
       break;
}
}
