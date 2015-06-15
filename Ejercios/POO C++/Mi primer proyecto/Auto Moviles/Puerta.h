
class Puerta
{
public:
    Puerta(bool _abierta, bool _vidirio_arriba, bool _seguro);
    void mostrar();
private:
    void status(bool x);
    bool abierta;
    bool vidirio_arriba;
    bool seguro;
};

Puerta::Puerta(bool _abierta, bool _vidirio_arriba, bool _seguro)
{
    abierta=_abierta;
    vidirio_arriba=_vidirio_arriba;
    seguro=_seguro;
}

void Puerta::status(bool x)
{
    if(x)
    {
        cout<<"si"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

void Puerta::mostrar()
{
    cout<<"Esta abierta: ";
    status(abierta);
    cout<<"Vidrio cerrado: ";
    status(vidirio_arriba);
    cout<<"Seguro activo: ";
    status(seguro);
}

