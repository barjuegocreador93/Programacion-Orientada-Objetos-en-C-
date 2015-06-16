class pared
{
public:
    pared(int = 0, int = 0, int = 0, int = 0);
    void modif(int x, int y, int f_x, int f_y);
    int distancia(char eje);
    void mostrar();
private:
    int pos_x, pos_y, posf_x, posf_y;
};

pared::pared(int x, int y, int f_x, int f_y)
{
    modif(x,y,f_x,f_y);
}
void pared::modif(int x, int y, int f_x, int f_y)
{
    pos_x=x;
    pos_y=y;
    posf_x=f_x;
    posf_y=f_y;
}

int pared::distancia(char eje)
{
    if(eje=='x')
    {
        return posf_x - pos_x;
    }
    else
    {
        if(eje=='y')
        {
            return posf_y - pos_y;
        }


    }
     return 0;
}
void pared::mostrar()
{
    cout<<"Pos x="<<pos_x<<endl;
    cout<<"Pos y="<<pos_y<<endl;
    cout<<"Pos  f x="<<posf_x<<endl;
    cout<<"Pos  f y="<<posf_y<<endl;
}
