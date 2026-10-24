#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int opcion;
    cout << "1. Comprimir\n2. Descomprimir\nOpcion: ";
    cin >> opcion;

    if (opcion == 1) {
        string cadena;
        cout << "Cadena: ";
        cin >> cadena;

        string comprimida = "";
        int n = cadena.length();

        for (int i = 0; i < n; i++) {
            int conteo = 1;
            while (i + 1 < n && cadena[i] == cadena[i + 1]) {
                conteo++;
                i++;
            }
            comprimida += cadena[i] + to_string(conteo);
        }

        cout << "Comprimida: " << comprimida << endl;

    } else if (opcion == 2) {
        string cadena;
        cout << "Cadena: ";
        cin >> cadena;

        string descomprimida = "";
        bool valido = true;
        int i = 0;
        int n = cadena.length();

        if (n == 0) valido = false;

        while (i < n && valido) {
            if (isdigit(cadena[i])) {
                valido = false;
                break;
            }

            char c = cadena[i];
            i++;

            if (i >= n || !isdigit(cadena[i])) {
                valido = false;
                break;
            }

            int num = 0;
            while (i < n && isdigit(cadena[i])) {
                num = num * 10 + (cadena[i] - '0');
                i++;
            }

            if (num <= 0) {
                valido = false;
                break;
            }

            for (int k = 0; k < num; k++) {
                descomprimida += c;
            }
        }

        if (!valido) {
            cout << "Formato invalido." << endl;
        } else {
            cout << "Descomprimida: " << descomprimida << endl;
        }
    }

    return 0;
}