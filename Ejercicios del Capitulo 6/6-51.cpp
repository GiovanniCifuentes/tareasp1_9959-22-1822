#include <iostream>

template <typename T>
T minimo(T a, T b) {
    return a < b ? a : b;
}

int main() {
    int int1 = 10, int2 = 20;
    char char1 = 'a', char2 = 'z';
    double double1 = 3.14, double2 = 2.72;

    std::cout << "El menor de " << int1 << " y " << int2 << " es " << minimo(int1, int2) << std::endl;
    std::cout << "El menor de " << char1 << " y " << char2 << " es " << minimo(char1, char2) << std::endl;
    std::cout << "El menor de " << double1 << " y " << double2 << " es " << minimo(double1, double2) << std::endl;

    return 0;
}
