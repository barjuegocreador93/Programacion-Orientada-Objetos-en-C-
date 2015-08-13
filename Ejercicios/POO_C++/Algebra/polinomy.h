#include "monomio.h"
class polinomy
{
    public:
        polinomy();
        void make(string tip_num);
        void oper();
        void der(string var);
        void integ(string var);
        void print();

    private:
        vector<monomy> alg;
};

polinomy::polinomy()
{

}

void polinomy::make(string tip_num)
{
    char x='z';
    while(x!='c')
    {
        cout<<"Crear un monomio?:(x=si||c=no)_:";
        cin>>x;
        if(x=='x')
        {

            monomy a;
            a.make(tip_num);
            alg.push_back(a);
        }
    }
    for(int i=0;i<alg.size();i++)
    {
        alg[i].oper();
    }
}

void polinomy::oper()
{
    for(int i=0;i<alg.size();i++)
    {
        for(int j=0;j<alg.size();j++)
        {
            if(i!=j)
            {
                if(alg[i]==alg[j])
                {
                    alg[i].num=alg[i].num+alg[j].num;
                    alg.erase(alg.begin()+j);
                    j--;
                }
            }
        }
    }
}



void polinomy::print()
{
    for(int i=0;i<alg.size();i++)
    {
        if(alg[i].num>0&&i!=0)cout<<"+";
        alg[i].print();
    }
}

void polinomy::der(string var)
{
    for(int i=0;i<alg.size();i++)
    {
        alg[i].der(var);
    }
}

void polinomy::integ(string var)
{
    for(int i=0;i<alg.size();i++)
    {
        alg[i].integ(var);
    }
    if(alg.size()!=0)
    {
        monomy c;
        c.get(1,"c",1);
        alg.push_back(c);
    }

}

