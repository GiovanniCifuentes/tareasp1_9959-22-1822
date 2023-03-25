#include <iostream>
#include <cmath>

using namespace std;

double distancia(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx*dx + dy*dy);
}

int main()
{
    double x1, x2, y1, y2;
    cout << "Ingrese el punto x1: " << endl;
    cin >> x1;
    cout << "Ingrese el punto y1: " << endl;
    cin >> y1;
    cout << "Ingrese el punto x2: " << endl;
    cin >> x2;
    cout << "Ingrese el punto y2: " << endl;
    cin >> y2;
    double d = distancia(x1, y1, x2, y2);
    cout << "La distancia entre los puntos es: " << d << endl;
    return 0;
}
