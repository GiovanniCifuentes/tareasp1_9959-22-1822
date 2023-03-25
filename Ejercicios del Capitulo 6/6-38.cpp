#include <iostream>

using namespace std;

void mover_disco(int num_disco, char aguja_origen, char aguja_destino) {
    cout << aguja_origen << " -> " << aguja_destino << endl;
}

void resolver_torres_hanoi(int num_discos, char aguja_origen, char aguja_destino, char aguja_temporal) {
    if (num_discos == 1) {
        mover_disco(num_discos, aguja_origen, aguja_destino);
    } else {
        resolver_torres_hanoi(num_discos-1, aguja_origen, aguja_temporal, aguja_destino);
        mover_disco(num_discos, aguja_origen, aguja_destino);
        resolver_torres_hanoi(num_discos-1, aguja_temporal, aguja_destino, aguja_origen);
    }
}

int main() {
    int num_discos = 3;
    char aguja_origen = '1';
    char aguja_destino = '3';
    char aguja_temporal = '2';

    resolver_torres_hanoi(num_discos, aguja_origen, aguja_destino, aguja_temporal);

    return 0;
}

