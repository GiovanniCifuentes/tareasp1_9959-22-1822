#include <iostream>

using namespace std;


 //definiendo mi primera clase en c++
class Gato{
public://quiere decir que lo pueden ver publico desde el main
    string Nombre; //esto define las caracteristicas o atributos
    Gato()//esto define a los constructores
    {
        Nombre="Felix"; //esto son los atributos
    }
    Gato(string pNombre) //constructor pero con parametros (esto sirve para colocarle otro nombre a otro gato)
    {
        Nombre = pNombre;
    }
    //definiendo los comportamientos o metodos
    void Meow ()
    {
        cout << Nombre << " dice Meow " << endl;
    }
};
//esto ya es una clase completa

int main()
{
    //creando mi primer objeto
    Gato miPrimerGato; //se creo, y se construye

    cout << "Mi primer objeto creado es un gato y se llama: "<<miPrimerGato.Nombre<< endl;

    Gato miSegundoGato("Tom"); // se creo con el constructor pero el que tiene parametros

    cout << "Mi primer objeto creado es otro gato y se llama: "<<miSegundoGato.Nombre<< endl;

    Gato miTercerGato("Michi");

    cout << "Mi primer objeto creado es otro gato y se llama: "<<miTercerGato.Nombre<< endl;

    //accediendo al metodo
    cout <<"Mi primer gato se comunica ";
    miPrimerGato.Meow();
    cout <<"Mi segundo gato se comunica ";
    miSegundoGato.Meow();
    cout <<"Mi tercer gato se comunica ";
    miTercerGato.Meow();

    return 0;
    }
