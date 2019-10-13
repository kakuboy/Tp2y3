#include "EnemigoPersigue.h"

EnemigoPersigue::EnemigoPersigue(QPixmap pixmap) : Enemigo (pixmap)
{

}
void EnemigoPersigue::moverEnemigo(int k, int l, Casillero ***&casilla,QLabel ***&labels)
{   int f=this->player->getX();
    int c=this->player->getY();
  if( (f>k) && (c<l) )//14
  {if(casilla[k][l-1]->getLibre())
    {    casilla[k][l-1]->setDatos(false, true, false);
          this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
          labels[k][l-1]->setPixmap(this->imagen);}
      else
      {if(casilla[k+1][l]->getLibre())
           {casilla[k+1][l]->setDatos(false, true, false);
              this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
              labels[k+1][l]->setPixmap(this->imagen);}
          else
            {if(casilla[k-1][l]->getLibre())
              {  casilla[k-1][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k-1][l]->setPixmap(this->imagen);}
              else
              {  casilla[k][l+1]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k][l+1]->setPixmap(this->imagen);}}
      }}

if( (f<k) && (c<l))//2
{if(casilla[k][l-1]->getLibre())
  {  casilla[k][l-1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l-1]->setPixmap(this->imagen);}
    else
    {if(casilla[k-1][l]->getLibre())
         {  casilla[k-1][l]->setDatos(false, true, false);
            this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
            labels[k-1][l]->setPixmap(this->imagen);}
        else
          {if(casilla[k+1][l]->getLibre())
            {  casilla[k+1][l]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k+1][l]->setPixmap(this->imagen);}
            else
            {  casilla[k][l+1]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k][l+1]->setPixmap(this->imagen);;}}}}


if( (f>k) && (c>l))//3
{if(casilla[k][l+1]->getLibre())
  {  casilla[k][l+1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l+1]->setPixmap(this->imagen);;}
    else
    {if(casilla[k+1][l]->getLibre())
         {  casilla[k+1][l]->setDatos(false, true, false);
            this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
            labels[k+1][l]->setPixmap(this->imagen);}
        else
          {if(casilla[k-1][l]->getLibre())
            {  casilla[k-1][l]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k-1][l]->setPixmap(this->imagen);}
            else
            {  casilla[k][l-1]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k][l-1]->setPixmap(this->imagen);;}}}}


if( (f<k) && (c>l))//4
{if(casilla[k][l+1]->getLibre())
  {  casilla[k][l+1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l+1]->setPixmap(this->imagen);}
    else
    {if(casilla[k-1][l]->getLibre())
         {  casilla[k-1][l]->setDatos(false, true, false);
            this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
            labels[k-1][l]->setPixmap(this->imagen);}
        else
          {if(casilla[k+1][l]->getLibre())
            {  casilla[k+1][l]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k+1][l]->setPixmap(this->imagen);}
            else
            {  casilla[k][l-1]->setDatos(false, true, false);
                this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                labels[k][l-1]->setPixmap(this->imagen);}}}}

if((f==k)&&(c>l))//5
{if(casilla[k][l+1]->getLibre())
  {  casilla[k][l+1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l+1]->setPixmap(this->imagen); }
    else
    {  casilla[k][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l]->setPixmap(this->imagen);}}

if((f>k)&&(c==l))//6
{if(casilla[k+1][l]->getLibre())
  {  casilla[k+1][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k+1][l]->setPixmap(this->imagen); }
    else
    {  casilla[k][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l]->setPixmap(this->imagen);}}

if((f==k)&&(c<l))//7
{if(casilla[k][l-1]->getLibre())
  {  casilla[k][l-1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l-1]->setPixmap(this->imagen); }
    else
    {  casilla[k][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l]->setPixmap(this->imagen);}}

if((f<k)&&(c==l))//8
{if(casilla[k-1][l]->getLibre())
  {  casilla[k-1][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k-1][l]->setPixmap(this->imagen); }
    else
    {  casilla[k][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l]->setPixmap(this->imagen);}}


}
