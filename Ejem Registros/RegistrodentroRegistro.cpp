#include <iostream>
using namespace std;

struct fechaNacimiento
    {
        int dia;
        int mes;
        int ayo;
    };
    struct datosPersona
    {
        string nombre;
        char inicial;
        struct fechaNacimiento fechaExactaNacimiento;
        float nota;
    };

int main()
{
    datosPersona persona;

    persona.nombre = "Ignacio";
    persona.inicial = 'J';
    persona.fechaExactaNacimiento.mes = 1;
    persona.fechaExactaNacimiento.dia = 13;
    persona.fechaExactaNacimiento.ayo = 2003;
    persona.nota = 7.5;
    cout << "La nota es: " <<persona.nota <<endl;
    cout << "Persona: "<<persona.nombre <<endl;
    cout << "Fecha de nacimiento: "<< persona.fechaExactaNacimiento.dia << " de " << persona.fechaExactaNacimiento.mes << " del " << persona.fechaExactaNacimiento.ayo << endl;

    return 0;
}

