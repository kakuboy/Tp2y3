#include "EnemigoDobleSalto.h"

EnemigoDobleSalto::EnemigoDobleSalto()
{

}

Casillero EnemigoDobleSalto::moverEnemigo(int k, int l, Casillero ***&casilla)
{ int f= this->player->getX();
  int c= this->player->getY() ;

  if( (f>k) && (c<l) )//1
  {if((casilla[k][l-1]->getLibre() && casilla[k][l-2]->getLibre()))
    {return *casilla[k][l-2];}
      else
      {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
           {return *casilla[k+2][l];}
          else
            {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
              {return *casilla[k-2][l];}
              else
                  if((casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre())))
              {return *casilla[k][l+2];}
          else {return *casilla[k][l+1];}}}}

  if( (f<k) && (c<l) )//2
      {if((casilla[k][l-1]->getLibre() && casilla[k][l-2]->getLibre()))
        {return *casilla[k][l-2];}
              else
          {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
             {return *casilla[k-2][l];}
               else
               {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
                  {return *casilla[k+2][l];}
                   else
                   if((casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre())))
                    {return *casilla[k][l+2];}
                  else {return *casilla[k][l+1];}}}}

  if( (f>k) && (c>l) )//3
      {if((casilla[k][l+1]->getLibre() && casilla[k][l+2]->getLibre()))
        {return *casilla[k][l+2];}
              else
          {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
             {return *casilla[k+2][l];}
               else
               {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
                  {return *casilla[k-2][l];}
                   else
                   if((casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre())))
                    {return *casilla[k][l-2];}
                  else {return *casilla[k][l-1];}}}}


  if( (f>k) && (c>l) )//4
      {if((casilla[k][l+1]->getLibre() && casilla[k][l+2]->getLibre()))
        {return *casilla[k][l+2];}
              else
          {if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
             {return *casilla[k-2][l];}
               else
               {if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
                  {return *casilla[k+2][l];}
                   else
                   if((casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre())))
                    {return *casilla[k][l-2];}
                  else {return *casilla[k][l-1];}}}}

if((f==k)&&(c>l))//5
{if(casilla[k][l+1]->getLibre()&&(casilla[k][l+2]->getLibre()))
  {return *casilla[k][l+2]; }
    else
    {return *casilla[k][l+1];}}

if((f>k)&&(c==l))//6
{if(casilla[k+1][l]->getLibre()&&(casilla[k+2][l]->getLibre()))
  {return *casilla[k+2][l]; }
    else
    {return *casilla[k+1][l];}}

if((f==k)&&(c<l))//7
{if(casilla[k][l-1]->getLibre()&&(casilla[k][l-2]->getLibre()))
  {return *casilla[k][l-2]; }
    else
    {return *casilla[k][l-1];}}

if((f<k)&&(c==l))//8
{if(casilla[k-1][l]->getLibre()&&(casilla[k-2][l]->getLibre()))
  {return *casilla[k-2][l];}
    else{return *casilla[k-1][l];}}

return *casilla[k][l];

}
