#include <iostream>

using namespace std;

class Mago
{
public:
    Mago(int cantidadPoder, int cantidadVida, string nombre)//constructor
    {
        mCantidadPoder = cantidadPoder;
        mCantidadVida = cantidadVida;
        mNombre = nombre;
    }
    //atributos
    int getVida()
    {
        return mCantidadVida;
    }
    string getNombre()
    {
        return mNombre;
    }
protected: //las clases si puede utilizar los atributos del padre
    int mCantidadPoder, mCantidadVida;
    string mNombre;
};
class MagoHielo: public Mago
{
public:
    MagoHielo (int cantidadPoder, int cantidadVida, string nombre):Mago(cantidadPoder, cantidadVida, nombre)//el constructor tambien necesita llevar de quien esta heredando
    {
        mCantidadPoder = cantidadPoder + 1;
        mCantidadVida = cantidadVida + 1;
        mNombre = nombre;
    }
};
class MagoFuego: public Mago
{
public:
    MagoFuego (int cantidadPoder, int cantidadVida, string nombre):Mago(cantidadPoder, cantidadVida, nombre)//el constructor tambien necesita llevar de quien esta heredando
    {
        mCantidadPoder = cantidadPoder + 1;
        mCantidadVida = cantidadVida + 100;
        mNombre = nombre;
    }
};

int main()
{
    Mago Gandalf(11, 100, "Gandalf");
    cout << "El nombre del mago es: " << Gandalf.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Gandalf.getVida() << "\n" << endl;

    MagoHielo ReyHelado (11, 100, "Rey Helado");
    cout << "El nombre del mago es: " << ReyHelado.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << ReyHelado.getVida() << "\n" << endl;

    MagoFuego Harry (11, 100, "Harry");
    cout << "El nombre del mago es: " << Harry.getNombre() << endl;
    cout << "La cantidad de vida del mago es: " << Harry.getVida() << endl;
    return 0;
}
