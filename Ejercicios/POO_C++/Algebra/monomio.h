#include<iostream>//Libreria principal
#include<vector>//libreria de listas
#include<stdlib.h>//libreria de system();
#include<math.h>
using namespace std;

class monomy
{
    public:
        monomy();
        void make();
        void print();
        void oper();
        void der(string var);
        void integ(string var);
        monomy &operator=(monomy &other);
        monomy operator*(float exp);
        monomy operator*(monomy &other);

    private:
        float num;
        vector<string> lit;
        vector<float> exp;

};

monomy::monomy()
{

}

void monomy::make()
{
    cout<<"Enter the number of your monomy: ";
    cin>>num;
    char x='x';
    while(x =='x'&& num != 0.0)
    {
        system("clear");
        cout<<"Quiere entrar una varable?:(x = si)||(c = no)_: ";
        cin>>x;
        if(x=='x')
        {
            string aux1;
            float aux2;
            system("clear");
            cout<<"Diga el nombre de la variable nueva: ";
            cin>>aux1;
            lit.push_back(aux1);
            system("clear");
            cout<<"Diga el exponente de la variable "<<aux1<<": ";
            cin>>aux2;
            exp.push_back(aux2);
        }

    }
}

void monomy::print()
{
    if(num!=0)if(num!=1)cout<<num;
    for(int i=0;i<lit.size();i++)
    {
        cout<<"*["<<lit[i];
        if(exp[i]!=1)cout<<"**"<<exp[i]<<"]";
        else cout<<"]";
    }

}

void monomy::oper()
{
    for(int i=0;i<lit.size();i++)
    {


        for(int j=0;j<lit.size();j++)
        {
            if(i!=j)
            {
                if(lit[i]==lit[j])
                {
                    exp[i]=exp[i]+exp[j];
                    exp.erase(exp.begin()+j);
                    lit.erase(lit.begin()+j);
                    j--;
                }
            }
        }
        if(exp[i]==0)
        {
            exp.erase(exp.begin()+i);
            lit.erase(lit.begin()+i);
        }
    }

}



monomy &monomy::operator=(monomy &other)
{
    num=other.num;
    exp=other.exp;
    lit=other.lit;
    return * this;
}

void monomy::der(string var)
{

    for(int i=0;i<lit.size();i++)
    {
        if(lit[i]==var)
        {
            num=num*exp[i];
            exp[i]=exp[i]-1;
        }
    }
    if(num==1&&lit.size()==0)
    {
        num=0;
    }
    oper();


}



monomy monomy::operator*(float exps)
{
    num=pow(num,exps);
    for(int i=0;i<lit.size();i++)
    {
        exp[i]=exp[i]*exps;
    }
}

monomy monomy::operator*(monomy &other)
{

}

void monomy::integ(string var)
{
    for(int i=0;i<lit.size();i++)
    {
        exp[i]=exp[i]+1;
        num=num/exp[i];
    }
    if(num==1&&lit.size()==0)
    {
        lit.push_back(var);
        exp.push_back(1.0);
    }
}

