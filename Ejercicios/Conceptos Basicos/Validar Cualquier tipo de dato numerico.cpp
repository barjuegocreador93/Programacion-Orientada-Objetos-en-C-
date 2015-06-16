#include <iostream>
using  namespace std;

/**Funcion Plantilla*/

template <class t>
//Esta funcion se puede convertir en cualquier tipo de dato en este caso es numerica asi que es recomendable usarla con int float double
t validar_num_mayor_cero(t num, string dato)
{
   num=-1;
   while(num < 0)
   {
       cout<<dato<<" : ";
       cin>>num;
   }
   return num;
}

int main()
{
    int Edad = validar_num_mayor_cero(Edad,"Entre su edad");
    float Masa = validar_num_mayor_cero(Masa,"Entre su masa");
    cout<<"Su edad es: "<<Edad<<endl;
    cout<<"Su Masa es: "<<Masa;

}


