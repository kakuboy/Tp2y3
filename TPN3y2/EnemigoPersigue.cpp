#include "EnemigoPersigue.h"

EnemigoPersigue::EnemigoPersigue()
{

}
Casillero EnemigoPersigue::moverEnemigo(int k, int l, Casillero ***&casilla)
{ int f= this->player->getX();
  int c= this->player->getY() ;

  if( (f>k) && (c<l) )//1
  {if(casilla[k][l-1]->getLibre())
    {return *casilla[k][l-1];}
      else
      {if(casilla[k+1][l]->getLibre())
           {return *casilla[k+1][l];}
          else
            {if(casilla[k-1][l]->getLibre())
              {return *casilla[k-1][l];}
              else
              {return *casilla[k][l+1];}}
      }}

if( (f<k) && (c<l))//2
{if(casilla[k][l-1]->getLibre())
  {return *casilla[k][l-1];}
    else
    {if(casilla[k-1][l]->getLibre())
         {return *casilla[k-1][l];}
        else
          {if(casilla[k+1][l]->getLibre())
            {return *casilla[k-1][l];}
            else
            {return *casilla[k][l+1];}}}}


if( (f>k) && (c>l))//3
{if(casilla[k][l+1]->getLibre())
  {return *casilla[k][l+1];}
    else
    {if(casilla[k+1][l]->getLibre())
         {return *casilla[k+1][l];}
        else
          {if(casilla[k-1][l]->getLibre())
            {return *casilla[k-1][l];}
            else
            {return *casilla[k][l-1];}}}}


if( (f<k) && (c>l))//4
{if(casilla[k][l+1]->getLibre())
  {return *casilla[k][l+1];}
    else
    {if(casilla[k-1][l]->getLibre())
         {return *casilla[k-1][l];}
        else
          {if(casilla[k+1][l]->getLibre())
            {return *casilla[k+1][l];}
            else
            {return *casilla[k][l-1];}}}}

if((f==k)&&(c>l))//5
{if(casilla[k][l+1]->getLibre())
  {return *casilla[k][l+1]; }
    else
    {return *casilla[k][l];}}

if((f>k)&&(c==l))//6
{if(casilla[k+1][l]->getLibre())
  {return *casilla[k+1][l]; }
    else
    {return *casilla[k][l];}}

if((f==k)&&(c<l))//7
{if(casilla[k][l-1]->getLibre())
  {return *casilla[k][l-1]; }
    else
    {return *casilla[k][l];}}

if((f<k)&&(c==l))//8
{if(casilla[k-1][l]->getLibre())
  {return *casilla[k-1][l]; }
    else
    {return *casilla[k][l];}}

return *casilla[k][l];
}
