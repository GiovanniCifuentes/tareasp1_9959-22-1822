#include "Celda.h"
#include <iostream>

using namespace std;

// Constructor por defecto de la clase Celda
Celda::Celda()
{
}

// Constructor con parámetros de la clase Celda
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX; // Asigna la coordenada X recibida al atributo de la clase
    this->coordenadaY = coordenadaY; // Asigna la coordenada Y recibida al atributo de la clase
    this->mina = estadoMina; // Asigna el estado de la mina recibido al atributo de la clase
    this->minaDescubierta = false; // Inicializa el estado de la mina descubierta en falso
}

// Método para establecer la coordenada X de la celda
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX; // Asigna la coordenada X recibida al atributo de la clase
}

// Método para obtener la coordenada X de la celda
int Celda::getCoordenadaX()
{
    return this->coordenadaX; // Devuelve el valor del atributo de la clase
}

// Método para establecer la coordenada Y de la celda
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY; // Asigna la coordenada Y recibida al atributo de la clase
}

// Método para obtener la coordenada Y de la celda
int Celda::getCoordenadaY()
{
    return this->coordenadaY; // Devuelve el valor del atributo de la clase
}

// Método para establecer el estado de la mina de la celda
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina()) // Si la celda ya tiene una mina asignada, devuelve falso
    {
        return false;
    }
    else{ // En caso contrario, asigna el estado de la mina recibido al atributo de la clase y devuelve verdadero
        this->mina = estadoMina;
        return true;
    }
}

// Método para obtener el estado de la mina de la celda
bool Celda::getMina()
{
    return this->mina; // Devuelve el valor del atributo de la clase
}

// Método para establecer el estado de la mina descubierta de la celda
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta; // Asigna el estado de la mina descubierta recibido al atributo de la clase
}

// Método para obtener el estado de la mina descubierta de la celda
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta; // Devuelve el valor del atributo de la clase
}

// Método para imprimir en consola la información de la celda
void Celda::imprimirCelda()
{
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


