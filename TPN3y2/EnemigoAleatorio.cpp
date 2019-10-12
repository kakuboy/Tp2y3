#include "EnemigoAleatorio.h"

EnemigoAleatorio::EnemigoAleatorio(QPixmap pixmap) : Enemigo (pixmap)
{

}

Casillero EnemigoAleatorio::moverEnemigo(int l , int k , Casillero ***&casilla)
{  int j=1+rand()%4;
   switch(j)
   {
   case 1 : if(casilla[k][l+1]->getLibre())//derecha
              {l++;
               return *casilla[k][l];}
           else {
           if(casilla[k][l-1]->getLibre())
               {l--;
                return *casilla[k][l];}
                else
               if(casilla[k+1][l]->getLibre())
                   {k++;
                    return *casilla[k][l];}
                else
               {k--;
                   return *casilla[k][l];}}
   case 2 : if(casilla[k][l-1]->getLibre())//izquierda
               {l--;
                return *casilla[k][l];}
            else {
            if(casilla[k][l+1]->getLibre())
                {l++;
                 return *casilla[k][l];}
                 else
                if(casilla[k+1][l]->getLibre())
                    {k++;
                     return *casilla[k][l];}
                 else
                {k--;
                    return *casilla[k][l];}}

   case 3 : if(casilla[k+1][l]->getLibre())//abajo
                {k++;
                 return *casilla[k][l];}
             else {
             if(casilla[k-1][l]->getLibre())
                 {k--;
                  return *casilla[k][l];}
                  else
                 if(casilla[k][l+1]->getLibre())
                     {l++;
                      return *casilla[k][l];}
                  else
                 {l--;
                     return *casilla[k][l];}}


   case 4 : if(casilla[k-1][l]->getLibre())//arriba
                 {k--;
                  return *casilla[k][l];}
              else {
              if(casilla[k+1][l]->getLibre())
                  {k++;
                   return *casilla[k][l];}
                   else
                  if(casilla[k][l+1]->getLibre())
                      {l++;
                       return *casilla[k][l];}
                   else
                  {l--;
                      return *casilla[k][l];}}
}
  return *casilla[k][l];}
