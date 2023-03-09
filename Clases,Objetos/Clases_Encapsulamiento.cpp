#include <iostream>
using namespace std;

class Perro
{
public:
    string mLadrido;
    Perro(string Nombre, string tipoLadrido)
    {
        mLadrido = tipoLadrido;
        mNombre = Nombre;
    }
    //--------------------------------------------------------------
    //construyendo dos metodos para acceder a el string mNombre
    //set y get reciben el nombre de encapsulamiento
    string getNombre() //get significa obtener (deme ese nombre)
    {
        return mNombre;
    }
    void setNombre(string pNombre)//set significa establecer o colocar informacion
    {
        mNombre = pNombre;
    }
    //--------------------------------------------------------------
    //metodo para ladrar
    void Ladrar()
    {
        cout << mLadrido << endl;
    }
private:
    string mNombre;

};
int main()
{
    Perro PerroUno ("Bobby", "Ladrido1");
    cout << PerroUno.getNombre()<<endl;
    PerroUno.setNombre("Neron");
    cout << PerroUno.getNombre()<<endl;
    PerroUno.Ladrar();
    cout <<"\n";
    Perro PerroDos ("Rudolf", "Ladrido2");
    cout << PerroDos.getNombre()<<endl;
    PerroDos.setNombre("Lazzie");
    cout << PerroDos.getNombre()<<endl;
    PerroDos.Ladrar();
    return 0;
}
