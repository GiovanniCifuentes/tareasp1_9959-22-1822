#include "Celda.h"
#include <iostream>

using namespace std;

Celda::Celda()
{

}
Celda::Celda(int coordenaX, int coordenaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubirta = false;
}
int Celda::setCoordenaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}
int Celda::getCoordenaX()
{
    return this->coordenadaX;
}
int Celda::setCoordenaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}
int Celda::getCoordenaY()
{
    return this->coordenadaY;
}
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }else
    {
        this->mina=estadoMina;
        return true;
    }
}
bool Celda::getMina()
{
    return this -> mina;
}
bool Celda::setMinaDescubirta(bool minaDescubierta)
{
    this->minaDescubirta = minaDescubierta;
}
bool Celda::getMinaDescubirta()
{
    return this->minaDescubirta;
}
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << "con mina? " << this->mina << "\n";
}
