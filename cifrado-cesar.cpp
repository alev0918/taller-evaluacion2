#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    char opcion;
    int k;
    string mensaje;

    cout << "Cifrar (C) o descifrar (D): ";
    cin >> opcion;
    cout << "Desplazamiento: ";
    cin >> k;

    cin.ignore(); // Limpia el salto de linea buffer
    cout << "Mensaje: ";
    getline(cin, mensaje);

    // Ajustar desplazamiento si es descifrado o si es un k muy grande/negativo
    if (opcion == 'D' || opcion == 'd') {
        k = -k;
    }

    k = k % 26; // Reducir desplazamiento al rango de -25 a 25

    string resultado = "";

    for (int i = 0; i < mensaje.length(); i++) {
        char c = mensaje[i];

        if (isalpha(c)) {
            char base = isupper(c) ? 'A' : 'a';
            // Formula modular para manejar giros positivos y negativos correctamente
            char nuevoChar = base + (c - base + k + 26) % 26;
            resultado += nuevoChar;
        } else {
            resultado += c; // Caracteres especiales/espacios se conservan igual
        }
    }

    cout << "Resultado: " << resultado << endl;

    return 0;
}