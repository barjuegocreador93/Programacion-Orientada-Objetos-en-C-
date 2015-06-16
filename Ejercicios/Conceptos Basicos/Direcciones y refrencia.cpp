
/**Realice el siguinte juego puzle y haga que el programa corra como le piden en la funcion main**/

#include <iostream>
using namespace std;

void universo()
{
    int * dir_x = &x;
    cout<<"Direccion de x="<<dir_x<<endl;
}


/**Variables Globales: */
int x=5;



/***/

int main()
{
   int y=7;
   //mostramos la ubicacion en memoria Direccion:
   int * dir_x = &x;
   int * dir_y = &y;
   cout<<"Direccion de x="<<dir_x<<endl;
   cout<<"Direccion de y="<<dir_y;
   /**
   Esto nos permite unir dos varbiales que pertencen a universos diferentes
   Pero las variables globales son las unicas que pueden expresarse en todas las funciones y elementos creados apartir de su declaración

pista:
    Para que el programa corra bien deve colocar la funcion universo despues de la declaracion de la variable x
        ***

   */
   cout<<"\n\n Funcion universo: ";
    universo();

   return 0;
}
