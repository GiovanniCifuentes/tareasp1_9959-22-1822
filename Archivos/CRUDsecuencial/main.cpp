#include "persona.h"
#include <iostream>
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>


using namespace std;

int main()
{
    string id,name,phone,college,address;
    persona estudiante(id,name,phone,college,address);
    estudiante.menu();
	return 0;
}
