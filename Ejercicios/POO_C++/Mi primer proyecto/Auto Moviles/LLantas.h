
class Llanta
{
public:
    Llanta(float = 25, float = 36, float = 25);
    void crear(float radio, float gros, float can_aire);
    void mostrar();

private:
    float Area_rin;
    float Grosor, volumen;
    float cantidad_aire;
};

Llanta::Llanta(float radio, float gros, float can_aire)
{
    crear(radio,gros,can_aire);
}
void Llanta::crear(float radio, float gros, float can_aire)
{
    Area_rin=3.14*radio*radio;
    Grosor=gros;
    volumen=Area_rin*Grosor;
    cantidad_aire=can_aire;
}
void Llanta::mostrar()
{
    cout<<"El area: "<<Area_rin<<endl;
    cout<<"El grosor: "<<Grosor<<endl;
    cout<<"El volumen: "<<volumen<<endl;
    cout<<"La Cantidad de Aire: "<<cantidad_aire<<endl;
}
