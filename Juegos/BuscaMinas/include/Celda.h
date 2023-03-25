#ifndef CELDA_H
#define CELDA_H


class Celda
{
    public:
        Celda();
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);
        int setCoordenaX (int coordenadaX);
        int getCoordenaX();
        int setCoordenaY (int coordenadaY);
        int getCoordenaY();
        bool setMina (bool estadoMina);
        bool getMina();
        bool setMinaDescubirta (bool minaDescubirta);
        bool getMinaDescubirta();
        void imprimirCelda();


    protected:

    private:
        int coordenadaX, coordenadaY;
        bool mina, minaDescubirta;
};

#endif // CELDA_H
