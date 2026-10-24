#include <iostream>

using namespace std;

int main() {
    int N;
    cout << "Ingrese N (>= 1): ";
    cin >> N;

    if (N < 1) {
        return 0;
    }

    int mejorNum = 1;
    long long maxPasos = 0;
    long long mejorValorMaximo = 1;

    for (int i = 1; i <= N; i++) {
        long long x = i;
        long long pasos = 0;
        long long valorMax = x;

        while (x != 1) {
            if (x % 2 == 0) {
                x = x / 2;
            } else {
                x = 3 * x + 1;
            }
            pasos++;
            if (x > valorMax) {
                valorMax = x;
            }
        }

        if (pasos > maxPasos) {
            maxPasos = pasos;
            mejorNum = i;
            mejorValorMaximo = valorMax;
        }
    }

    cout << "Numero con la secuencia mas larga: " << mejorNum << endl;
    cout << "Pasos: " << maxPasos << endl;
    cout << "Valor maximo alcanzado: " << mejorValorMaximo << endl;

    return 0;
}