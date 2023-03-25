//nota: yo busque esta forma porque creo que es la mas facil de realizar y de comprender
#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main ()
{
    srand(time(NULL));

    cout << "El numero en 1 <= n <= 2: " << endl;
    int n = rand() % 2 + 1;
    cout << n << endl;
    cout << "El numero en 1 <= n <= 100: " << endl;
    int q = rand() % 100 + 1;
    cout << q << endl;
    cout << "El numero en 0 <= n <= 9: " << endl;
    int e = rand() % 10;
    cout << e << endl;
    cout << "El numero en 1000 <= n <= 1112: " << endl;
    int r = rand() % 113 + 1000;
    cout << r << endl;
    cout << "El numero en -1 <= n <= 1: " << endl;
    int t = rand() % 3 - 1;
    cout << t << endl;
    cout << "El numero en -3 <= n <= 11: " << endl;
    int y = rand() % 15 - 3;
    cout << y << endl;
    return 0;
}

