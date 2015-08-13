#include "monomio.h"

int main()
{
    monomy a,b,c;
    a.make();
    a.oper();
    b=a;
    c=a;
    c.integ("a");
    b.der("a");
    cout<<"Expresion: ";a.print();cout<<"\n";
    cout<<"Derivada: ";b.print();cout<<"\n";
    cout<<"Integra: ";c.print();
    return 0;
}

