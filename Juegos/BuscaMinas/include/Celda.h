#ifndef CELDA_H
#define CELDA_H


class Celda
{
    public:
        Celda();
        Celda(int x, int y, bool tieneMina);
        void imprimir();
        bool colocarMina(bool tieneMina);
        bool tieneMina();
        bool estadoMina();
        void encontrarMina();


    protected:

    private:
        int x, y;
        bool mina, descubierta;
};

#endif // CELDA_H
