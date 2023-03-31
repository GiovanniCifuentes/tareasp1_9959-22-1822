#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"
#include "Config.h"

using namespace std;

// Declaraci�n de la clase Tablero
class Tablero
{
    public:
        // Constructores
        Tablero();
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);

        // M�todos para obtener y establecer la altura del tablero
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);

        // M�todos para obtener y establecer el ancho del tablero
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);

        // M�todos para obtener y establecer el modo desarrollador
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);

        // M�todos para imprimir el tablero
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();

        // M�todos para colocar y descubrir minas en el tablero
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);

        // M�todo para contar el n�mero de celdas sin minas y sin descubrir en el tablero
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
        // M�todos privados para obtener la representaci�n de una mina y el n�mero de minas cercanas
        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
        //Config config;
        //int vidaTablero;
};

#endif // TABLERO_H
