/**Vamos a Crear el objeto empleado*/
#include <iostream>
#include <string.h>
using namespace std;
template <class t>
void validar_num_mayor_cero(t & num, string dato)
{
   num=-1;
   int i=0;
   while(num < 0)
   {
	   if(i != 0)
	   {
		   cout<<dato<<"No pudo ser gurdada por no ser mayor o iegual que cero ";
	   }
       cout<<dato<<" : ";
       cin>>num;
   }
   
}

class empleado
{
	friend istream &operator>>(istream &,  empleado &);
    friend ostream &operator<<(ostream &,  const empleado &);	
	public:
		empleado(string=" ",string=" ",int=18,float=200000);
		~empleado();
		void pedirEmpleado();
		void mostrarEmpleado();
		bool operator ==(empleado & otro);
		bool operator !=(empleado & otro);
	private:
		string codigo;
		string nombre;
		int edad;
		float sueldo;	
};
empleado::empleado(string _codigo, string _nombre, int _edad, float _sueldo)
{
	codigo=_codigo;
	nombre=_nombre;
	edad=(_edad > 0 ) ? _edad : 0;
	sueldo=_sueldo;
}
empleado::~empleado()
{
	
}
void empleado::pedirEmpleado()
{
	cout<<"Entrar un empleado: \n\n";
	cout<<"Nombre: ";cin>>nombre;
	cout<<"Codigo: ";cin>>codigo;
	validar_num_mayor_cero(edad,"Edad: ");
	cout<<"sueldo: ";cin>>sueldo;
}

void empleado::mostrarEmpleado()
{
	cout<<"Empleado: \n\n";
	cout<<"Nombre: "<<nombre<<"\n";
	cout<<"Codigo: "<<codigo<<"\n";
	cout<<"Edad: "<<edad<<"\n";
	cout<<"Sueldo: "<<sueldo<<"\n";
}

bool empleado::operator==(empleado & otro)
{
	if(otro.codigo == codigo)
	{
		return 1;
	}
	return 0;
}

bool empleado::operator!=(empleado & otro)
{
	if(!this==otro)
	return 1;
	return 0;
}
istream empleado::&operator>>(istream & entrada,  empleado &var)
{
	var.pedirEmpleado();
	return entrada;
}
ostream empleado::&operator<<(ostream & salida,  const empleado &var)
{
	var.mostrarEmpleado();
	return salida;
}

int main()
{
	empleado a, b;
	cin>>a;
	cout<<a;
	cin>>b;
	cout<<b;

	if(a==b)
	{
		cout<<"\n\n Usan el mismo codigo!";
	}	
	return 0;
}