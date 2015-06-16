#include <iostream>
#include <stdio.h>
using namespace std;
#include "Pared.h"




int main()
{
    pared * a;
    a=new pared[25];

    for(int i=0;i<25;i++)
    {
        a[i].mostrar();
    }


    getchar();
 return 0;
}
