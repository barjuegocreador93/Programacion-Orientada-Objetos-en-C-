#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;

//OBJETO:
class persona
{
    //LLAMADA A METODOS PUBLICOS DEL OBJETO:
    public:
    
        //CONSTRUCTOR: 
        persona();
        
        //METODO PARA CAMBIAR LAS PROPIEDADES DEL OBJETO:
        void capturar(int _edad, string _nombre);
        
        //METODO PARA MOSTRAR EN PANTALLA LAS PROPIEDADES DEL OBJETO:
        void mostrar();
        
        //METODO PARA ENTREGAR A UNA VARIABLE DEL MISMO TIPO DE UNA DE SUS PROPIEDADES:
        int entregarEdad();
        
    //FIN DE LOS METODOS PUBLICOS    
     
    //LLAMADA LAS PROPIEDADES PRIVADAS DEL OBJETO:   
    private:
    
        //ATRIBUTO EDAD:
        int edad;
        
        //ATRIBUTO NOMBRE:
        string nombre;
};
//CONSTRUCION DE LOS METODOS USANDO LAS PROPIEDADES DEL OBJETO:
persona::persona()
{
    edad=0;
    nombre=" ";
}
void persona::capturar(int _edad, string _nombre)
{
    edad=_edad;
    nombre=_nombre;
}
void persona::mostrar()
{
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"La edad es: "<<edad<<endl;
}
int persona::entregarEdad()
{
    return edad;
}
//###############################################

int main()
{

    persona a, c, d, x;//Se declaran variables de tipo persona
    a.capturar(5,"Andres");
    c.capturar(12,"Daniel");
    d.capturar(12, "Rodrigo");
    x.capturar(78, "Maria");

    a.mostrar();
    c.mostrar();
    d.mostrar();
    x.mostrar();

    int suma_de_edades= a.entregarEdad() + c.entregarEdad() + d.entregarEdad() + x.entregarEdad();
    cout<<suma_de_edades;


    getchar();
    return 0;
}
