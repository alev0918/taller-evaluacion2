#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cout << "Numero de filas (1 a 15): ";
    cin >> n;

    if (n < 1 || n > 15) {
        return 0;
    }

    int ancho = 5; // Ancho fijo por columna para la alineacion

    for (int i = 0; i < n; i++) {
        // Imprimir espacios iniciales para centrar
        for (int s = 0; s < (n - 1 - i); s++) {
            cout << setw(ancho / 2 + 1) << "";
        }

        long long val = 1;
        for (int k = 0; k <= i; k++) {
            cout << setw(ancho) << val;
            // Relacion recurrente: C(n, k+1) = C(n, k) * (n - k) / (k + 1)
            val = val * (i - k) / (k + 1);
        }
        cout << endl;
    }

    return 0;
}