#ifndef JUEGO_H
#define JUEGO_H


class Juego
{
    public:
        Juego();
        Juego(Tablero tablero, int cantidadMinas);
        void colocarMinas();
        void iniciarJuego();

    protected:

    private:
};

#endif // JUEGO_H
