#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"
#include "Config.h"

using namespace std;

// Declaración de la clase Tablero
class Tablero
{
    public:
        // Constructores
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        // Métodos para obtener y establecer la altura del tablero
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);

        // Métodos para obtener y establecer el ancho del tablero
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);

        // Métodos para obtener y establecer el modo desarrollador
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        // Métodos para imprimir el tablero
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        // Métodos para colocar y descubrir minas en el tablero
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);

        // Método para contar el número de celdas sin minas y sin descubrir en el tablero
        int contarCeldasSinMinasYSinDescubrir();

        //int getVidas();
        //void setVidas(int numVidas);

        //Tablero(Config config, int vidaTablero);



    protected:

    private:
        int alturaTablero, anchoTablero;
        //int numVidas;
        bool modoDesarrollador;
        // Contenedor de celdas del tablero
        vector<vector<Celda> > contenidoTablero;
        // Métodos privados para obtener la representación de una mina y el número de minas cercanas
        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
        //Config config;
        //int vidaTablero;
};

#endif // TABLERO_H
