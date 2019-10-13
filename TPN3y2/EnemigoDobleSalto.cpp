#include "EnemigoDobleSalto.h"

EnemigoDobleSalto::EnemigoDobleSalto(QPixmap pixmap) : Enemigo (pixmap)
{

}

void EnemigoDobleSalto::moverEnemigo(int k, int l, Casillero ***&casilla, QLabel ***&labels)
{ int f=this->player->getX();
  int c=this->player->getY();

 if( (f>k) && (c<l) )//1
  {if((casilla[k][l-1]->getLibre() && casilla[k][l-2]->getLibre()))
    {casilla[k][l-2]->setDatos(false, true, false);
          this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
          labels[k][l-2]->setPixmap(this->imagen);}
      else
      {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
           {casilla[k+2][l]->setDatos(false, true, false);
              this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
              labels[k+2][l]->setPixmap(this->imagen);}
          else
            {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
              {casilla[k-2][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k-2][l]->setPixmap(this->imagen);}
              else
                  if((casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre())))
              {casilla[k][l+2]->setDatos(false, true, false);
                      this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                      labels[k][l+2]->setPixmap(this->imagen);}
          else {casilla[k][l+1]->setDatos(false, true, false);
                      this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                      labels[k][l+1]->setPixmap(this->imagen);}}}}

  if( (f<k) && (c<l) )//2
      {if((casilla[k][l-1]->getLibre() && casilla[k][l-2]->getLibre()))
        {casilla[k][l-2]->setDatos(false, true, false);
          this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
          labels[k][l-2]->setPixmap(this->imagen);}
              else
          {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
             {casilla[k-2][l]->setDatos(false, true, false);
              this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
              labels[k-2][l]->setPixmap(this->imagen);}
               else
               {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
                  {casilla[k+2][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k+2][l]->setPixmap(this->imagen);}
                   else
                   if((casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre())))
                    {casilla[k][l+2]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l+2]->setPixmap(this->imagen);}
                  else {casilla[k][l+1]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l+1]->setPixmap(this->imagen);}}}}

  if( (f>k) && (c>l) )//3
      {if((casilla[k][l+1]->getLibre() && casilla[k][l+2]->getLibre()))
        {casilla[k][l+2]->setDatos(false, true, false);
          this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
          labels[k][l+2]->setPixmap(this->imagen);}
              else
          {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
             {casilla[k+2][l]->setDatos(false, true, false);
              this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
              labels[k+2][l]->setPixmap(this->imagen);}
               else
               {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
                  {casilla[k-2][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k-2][l]->setPixmap(this->imagen);}
                   else
                   if((casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre())))
                    {casilla[k][l-2]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l-2]->setPixmap(this->imagen);}
                  else {casilla[k][l-1]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l-1]->setPixmap(this->imagen);}}}}


  if( (f>k) && (c>l) )//4
      {if((casilla[k][l+1]->getLibre() && casilla[k][l+2]->getLibre()))
        {casilla[k][l+2]->setDatos(false, true, false);
          this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
          labels[k][l+2]->setPixmap(this->imagen);}
              else
          {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
             {casilla[k-2][l]->setDatos(false, true, false);
              this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
              labels[k-2][l]->setPixmap(this->imagen);}
               else
               {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
                  {casilla[k+1][l]->setDatos(false, true, false);
                  this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                  labels[k+1][l]->setPixmap(this->imagen);}
                   else
                   if((casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre())))
                    {casilla[k][l-2]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l-2]->setPixmap(this->imagen);}
                  else {casilla[k][l-1]->setDatos(false, true, false);
                       this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
                       labels[k][l-1]->setPixmap(this->imagen);}}}}

if((f==k)&&(c>l))//5
{if(casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre()))
  {casilla[k][l+2]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l+2]->setPixmap(this->imagen); }
    else
    {casilla[k][l+1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l+1]->setPixmap(this->imagen);}}

if((f>k)&&(c==l))//6
{if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
  {casilla[k+2][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k+2][l]->setPixmap(this->imagen); }
    else
    {casilla[k+1][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k+1][l]->setPixmap(this->imagen);}}

if((f==k)&&(c<l))//7
{if(casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre()))
  {casilla[k][l-2]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l-2]->setPixmap(this->imagen); }
    else
    {casilla[k][l-1]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k][l-1]->setPixmap(this->imagen);}}

if((f<k)&&(c==l))//8
{if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
  {casilla[k-2][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k-2][l]->setPixmap(this->imagen);}
    else{casilla[k-1][l]->setDatos(false, true, false);
        this->imagen = this->imagen.scaled(17,17,Qt::KeepAspectRatio);
        labels[k-1][l]->setPixmap(this->imagen);}}



}
