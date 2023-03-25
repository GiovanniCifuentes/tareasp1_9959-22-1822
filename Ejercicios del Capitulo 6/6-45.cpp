#include <iostream>
using namespace std;

int misterio(int, int);

int main()
{
    int x = 0;
    int y = 0;

    cout << "Escriba dos enteros: ";
    cin >> x >> y;
    cout << "El resultado es " << misterio(x, y) << endl;
}

int misterio(int a, int b)
{
    if (b == 0)
        return 0;
    else if (b < 0)
        return -misterio(a, -b);
    else if (b == 1)
        return a;
    else
        return a + misterio(a, b - 1);
}
