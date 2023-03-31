#ifndef CELDA_H
#define CELDA_H

// Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
// Fecha: 17 marzo 2023

class Celda
{
public:
    // Constructor por defecto que inicializa la coordenadaX y la coordenadaY a cero, la mina y la minaDescubierta a falso
    Celda();

    // Constructor que toma la coordenadaX, la coordenadaY y el estado de la mina como parámetros para inicializar la celda
    Celda(int coordenadaX, int coordenadaY, bool estadoMina);

    // Métodos para establecer y obtener la coordenadaX y la coordenadaY de la celda
    int setCoordenadaX(int coordenadaX);
    int getCoordenadaX();
    int setCoordenadaY(int coordenadaY);
    int getCoordenadaY();

    // Métodos para establecer y obtener el estado de la mina en la celda
    bool setMina(bool estadoMina);
    bool getMina();

    // Métodos para establecer y obtener el estado de la mina descubierta en la celda
    bool setMinaDescubierta(bool minaDescubierta);
    bool getMinaDescubierta();

    // Método que imprime el estado actual de la celda (mina descubierta, mina sin descubrir, etc.)
    void imprimirCelda();

protected:
    // Atributos protegidos, accesibles sólo por la clase Celda y sus subclases (si las hubiera)

private:
    // Atributos privados, accesibles sólo por la clase Celda
    int coordenadaX, coordenadaY; // Coordenadas de la celda en el tablero
    bool mina; // Indica si la celda contiene una mina
    bool minaDescubierta; // Indica si la mina de la celda ha sido descubierta
};

#endif // CELDA_H
