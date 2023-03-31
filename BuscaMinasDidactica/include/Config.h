#ifndef CONFIG_H
#define CONFIG_H


class Config // Definición de la clase Config
{
    public:
        Config(int filasTablero, int columnasTablero, int minasTablero, bool modoDesarrolladorTablero, int vidasTablero);
        // Constructor de la clase Config con parámetros para configurar el tablero
        int getFilasTablero(); // Método para obtener el número de filas del tablero
        int setFilasTablero(int filasTablero); // Método para establecer el número de filas del tablero
        int getColumnasTablero(); // Método para obtener el número de columnas del tablero
        int setColumnasTablero(int columnasTablero); // Método para establecer el número de columnas del tablero
        int getminasTablero(); // Método para obtener el número de minas del tablero
        int setminasTablero(int minasTablero); // Método para establecer el número de minas del tablero
        bool getmodoDesarrolladorTablero(); // Método para obtener el estado del modo desarrollador del tablero
        bool setmodoDesarrolladorTablero(bool mododesarrolladorTablero); // Método para establecer el estado del modo desarrollador del tablero
        int getvidaTablero(); // Método para obtener el número de vidas del tablero
        int setvidaTablero(int vidaTablero); // Método para establecer el número de vidas del tablero
        void menuConfiguracion(); // Método para mostrar un menú de configuración

    protected: // Sección protegida de la clase

    private: // Sección privada de la clase
        int filasTablero; // Número de filas del tablero
        int columnasTablero; // Número de columnas del tablero
        int minasTablero; // Número de minas del tablero
        bool mododesarrolladorTablero; // Estado del modo desarrollador del tablero
        int vidaTablero; // Número de vidas del tablero
};

#endif // CONFIG_H //
