#include <iostream>

using namespace std;

class Animal
{
public:
    void sonidoAnimal()//metodo
    {
        cout << "Los animales hacen sonidos"<<endl;
    }
};
class Cerdo : public Animal
{
public:
    void sonidoAnimal()//metodo
    {
        cout<<"El cerdo dice: oinc oninc"<<endl;
    }
};
class Perro : public Animal
{
public:
    void sonidoAnimal()//metodo
    {
        cout<<"El perro dice: Guau Guau"<<endl;
    }
};

int main()
{
    Animal miAnimal;
    Cerdo miCerdo;
    Perro miPerro;

    miAnimal.sonidoAnimal();
    miPerro.sonidoAnimal();
    miCerdo.sonidoAnimal();

    return 0;
}
