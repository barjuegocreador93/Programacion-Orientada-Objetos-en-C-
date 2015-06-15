#include <iostream>
#include <vector>

using namespace std;
#include "LLantas.h"
#include "Puerta.h"

void vectores_direccion()
{
    Llanta * nom;
    nom= new Llanta[4];
    nom[0].crear(25,36,12);
    nom[1].crear(45,21,47);
    for(int i=0;i<4;i++)
        nom[i].mostrar();
}
void vectores_vector()
{

    vector<Llanta> nom;
    char key='a';
    int m=0;
    while(key!='x')
    {
        cout<<"Quiere crear una llanta (x para no): ";
        cin>>key;
        if(key!='x')
        {
            Llanta x;
            nom.push_back(x);
            m++;
        }
        nom.pop

    }
    for(int i=0;i<m;i++)
            nom[i].mostrar();

}


int main()
{

    vectores_vector();


    return 0;
}
