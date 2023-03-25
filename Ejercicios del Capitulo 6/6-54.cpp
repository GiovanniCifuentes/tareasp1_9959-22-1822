#include <iostream>
#include <random>
#include <ctime>
using namespace std;

unsigned int rollDice(); // tira los dados, calcula y muestra la suma

int main()
{
    // enumeración con constantes que representa el estado del juego
    enum Estado { CONTINUAR, GANO, PERDIO };

    // randomiza el generador de números aleatorios, usando la hora actual
    default_random_engine motor(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> dado(1, 6);

    unsigned int miPunto = 0; // punto si no se gana o pierde en el primer tiro
    Estado estadoJuego = CONTINUAR; // puede contener CONTINUAR, GANO o PERDIO
    unsigned int sumaDeDados = rollDice(); // primer tiro del dado

    // determina el estado del juego y el punto (si es necesario), con base en el primer tiro
    switch (sumaDeDados)
    {
        case 7: // gana con 7 en el primer tiro
        case 11: // gana con 11 en el primer tiro
            estadoJuego = GANO;
            break;
        case 2: // pierde con 2 en el primer tiro
        case 3: // pierde con 3 en el primer tiro
        case 12: // pierde con 12 en el primer tiro
            estadoJuego = PERDIO;
            break;
        default: // no gano ni perdio, por lo que recuerda el punto
            estadoJuego = CONTINUAR; // el juego no ha terminado
            miPunto = sumaDeDados; // recuerda el punto
            cout << "El punto es " << miPunto << endl;
            break; // opcional al final del switch
    } // fin de switch

    // mientras el juego no esté completo
    while (CONTINUAR == estadoJuego) // no GANO ni PERDIO
    {
        sumaDeDados = rollDice(); // tira los dados de nuevo

        // determina el estado del juego
        if (sumaDeDados == miPunto) // gana al hacer un punto
            estadoJuego = GANO;
        else
            if (sumaDeDados == 7) // pierde al tirar 7 antes del punto
                estadoJuego = PERDIO;
    } // fin de while

    // muestra mensaje de que ganó o perdió
    if (GANO == estadoJuego)
        cout << "El jugador gana" << endl;
    else
        cout << "El jugador pierde" << endl;
} // fin de main

// tira los dados, calcula la suma y muestra los resultados
unsigned int rollDice()
{
    default_random_engine motor(static_cast<unsigned int>(time(0)));
    uniform_int_distribution<unsigned int> dado(1, 6);

    // elige valores aleatorios para el dado
    unsigned int dado1 = dado(motor); // tiro del primer dado
    unsigned int dado2 = dado(motor); // tiro del segundo dado

    unsigned int suma = dado1 + dado2; // calcula la suma de valores de los dados

    // muestra los resultados de este tiro
    cout << "El jugador tiro " << dado1 << " + " << dado2 << " = " << suma << endl;
    return suma; // devuelve la suma de los dados
} // fin de la función rollDice

