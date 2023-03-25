#ifndef TABLERO_H
#define TABLERO_H
#include <vector>


class Tablero
{
    public:
        Tablero();
        Tablero(int altura, int ancho, bool modoPrivilegiado);

    protected:

    private:
        int alturaTablero, anchoTablero;
        bool modoPrivilegiado;
        vector<vector<Celda>> contenido;
};

#endif // TABLERO_H
