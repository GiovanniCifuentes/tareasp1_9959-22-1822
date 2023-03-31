#ifndef JUEGO_H
#define JUEGO_H

#include "Tablero.h"
#include "Config.h"

// Clase que representa el juego del buscaminas.
class Juego
{
private:
    //Config config;
    Tablero tablero;        // Objeto Tablero que representa el tablero de juego.
    int cantidadMinas;      // Cantidad de minas que se colocarán en el tablero.

    int aleatorio_en_rango(int minimo, int maximo);   // Retorna un número aleatorio en el rango [minimo, maximo].
    int filaAleatoria();                             // Retorna una fila aleatoria en el rango [0, filas-1] del tablero.
    int columnaAleatoria();                         // Retorna una columna aleatoria en el rango [0, columnas-1] del tablero.
    /*int numVidas;
    int totalVidas;*/


public:
    // Constructor que recibe un objeto Tablero y la cantidad de minas que se colocarán.
    Juego(Tablero tablero, int cantidadMinas);

    // Coloca las minas en el tablero de manera aleatoria.
    void colocarMinasAleatoriamente();

    // Pide al usuario que ingrese una fila para descubrir.
    int solicitarFilaUsuario();

    // Pide al usuario que ingrese una columna para descubrir.
    int solicitarColumnaUsuario();

    // Retorna true si el jugador gana el juego (todas las celdas sin minas están descubiertas).
    bool jugadorGana();

    // Inicia el juego.
    void iniciar();

    /*int getVidas();
    void setVidas(int numVidas);*/

};

#endif // JUEGO_H
