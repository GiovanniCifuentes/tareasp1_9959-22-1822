#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(NULL));

    cout << "Numero al azar del conjunto 2, 4, 6, 8, 10: " << 2 * (rand() % 5 + 1) << endl;

    cout << "Numero al azar del conjunto 3, 5, 7, 9, 11: " << 2 * (rand() % 5 + 1) + 1 << endl;

    cout << "Numero al azar del conjunto 6, 10, 14, 18, 22: " << 4 * (rand() % 5 + 1) + 2 << endl;;
    return 0;
}

