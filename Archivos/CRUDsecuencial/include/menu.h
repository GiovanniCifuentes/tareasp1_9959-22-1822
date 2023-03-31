#ifndef MENU_H
#define MENU_H


class menu
{
    public:
        void menu();
		void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:
        string id,name,phone,college,address;
};

#endif // MENU_H
