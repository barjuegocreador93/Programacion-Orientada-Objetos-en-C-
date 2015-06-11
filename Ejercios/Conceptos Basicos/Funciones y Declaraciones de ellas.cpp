#include <iostream>
using namespace std;


/**Se puede declarar una funcion: **/
void diaDeLaSemana(int x);

int main()
{
    diaDeLaSemana(5);
    return 0;
}

/**Y trabjarla debajo */
void diaDeLaSemana(int x)
{
    switch(x)
    {
        case 1:cout<<"Lunes";break;
        case 2:cout<<"Martes";break;
        case 3:cout<<"Miercoles";break;
        case 4:cout<<"Jueves";break;
        case 5:cout<<"Viernes";break;
        case 6:cout<<"Sabado";break;
        case 7:cout<<"Domingo";break;

    }

}
