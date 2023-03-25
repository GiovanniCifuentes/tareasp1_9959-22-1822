#include <iostream>
using namespace std;

int main()
{
    struct datosPersona
    {
        string nombre;
        char inicial;
        int edad;
        float nota;
    };

    datosPersona persona;//tipo de dato

    persona.nombre = "Juan";
    persona.inicial = 'J';
    persona.edad = 20;
    persona.nota = 7.5;
    cout <<"El nombre es: " <<persona.nombre;
    cout << "\nLa edad es: " <<persona.edad<<endl;
    persona.nombre = "Carlos";
    persona.inicial = 'C';
    persona.edad = 23;
    persona.nota = 10.0;
    cout <<"El nombre es: " <<persona.nombre;
    cout << "\nLa edad es: " <<persona.edad;

    return 0;
}
