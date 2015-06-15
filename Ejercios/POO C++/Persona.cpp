#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;


class persona//OBJETO
{
    public://LLAMADA A METODOS DEL OBJETO:
        persona();//CONSTRUCTOR
        void capturarEdad(int _edad);//METODO PARA CAMBIAR LAS PROPIEDADES DEL OBJETO
        void mostrarEdad();//METODO PARA MOSTRAR EN PANTALLA LAS PROPIEDADES DEL OBJETO
        int entregarEdad();//METODO PARA ENTREGAR A UNA VARIABLE DEL MISMO TIPO DE UNA DE SUS PROPIEDADES
    private://LLAMADA LAS PROPIEDADES DEL OBJETO PUBLICOS:
        int edad;//PROPIEDAD
};
//CONSTRUCION DE LOS METODOS USANDO LAS PROPIEDADES DEL OBJETO:
persona::persona()
{
    edad=0;
}
void persona::capturarEdad(int _edad)
{
    edad=_edad;
}
void persona::mostrarEdad()
{
    cout<<"La edad es: "<<edad<<endl;
}
int persona::entregarEdad()
{
    return edad;
}
//###############################################

int main()
{

persona a, c, d, x;
a.capturarEdad(5);
c.capturarEdad(12);
d.capturarEdad(12);
x.capturarEdad(78);

a.mostrarEdad();
c.mostrarEdad();
d.mostrarEdad();
x.mostrarEdad();

int suma_de_edades= a.entregarEdad() + c.entregarEdad() + d.entregarEdad() + x.entregarEdad();
cout<<suma_de_edades;


getchar();
return 0;
}
