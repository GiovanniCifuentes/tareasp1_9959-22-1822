#ifndef PERSONA_H
#define PERSONA_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>


using namespace std;

class persona
{
    public:
        persona();
        persona(string id, string name, string phone, string college, string address);
        string setId(string id);
        string getId();
        string setName(string name);
        string getName();
        string setPhone(string phone);
        string getPhone();
        string setCollege(string college);
        string getCollege();
        string setAddress(string address);
        string getAddress();
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

#endif // PERSONA_H"
