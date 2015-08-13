#include "polinomy.h"
void monomio_pro()
{
    monomy a,b,c;
    a.make("racional");
    a.oper();
    b=a;
    c=a;
    c.integ("a");
    b.der("a");
    cout<<"Expresion: ";a.print();cout<<"\n";
    cout<<"Derivada: ";b.print();cout<<"\n";
    cout<<"Integra: ";c.print();
}

void polinomy_pro()
{
    polinomy a;
    a.make("racional");
    a.oper();
    a.integ("a");
    a.print();cout<<"\n";


}


int main()
{
    polinomy_pro();
    return 0;
}

