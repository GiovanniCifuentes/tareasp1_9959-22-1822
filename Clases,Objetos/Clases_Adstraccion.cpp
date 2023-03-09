#include <iostream>
using namespace std;

class Persona
{
public:
    int mEdad;//atributos
    Persona (int edadPersona)//constructor con parametros
    {
        mEdad = edadPersona;//es un estandar
    }
    void pensamientoPersona()//definir un metodo
    {
        cout << obtenerPensamientos() << endl; //esto es lo que va hacer la invocacion
    }
    //atributos privados = no se puede acceder a ellos = ADSTRACCION
private:
    int nivelSocial;
    int nivelInteligencia;
    int nivelSuerte;
    string obtenerPensamientos()
    {
        nivelSocial= 0;
        nivelInteligencia = 10;
        nivelSuerte = 10;
        if (nivelSocial + nivelSuerte > 100)
        {
            return "Estoy pensando algo muy bueno y me causa alegria"; //esta devoviendo un comentario no debe de usarse cout y <<
        }
        else if(nivelSuerte > nivelInteligencia)
        {
            return "Soy un suertudo";
        }
        else if (mEdad>18)
        {
            return "Soy un adulto";
        }
        else
        {
            return "No estoy pensando en nada";
        }
    }
};
int main()
{
    Persona Roberto(19);
    Roberto.pensamientoPersona();

    return 0;
}
