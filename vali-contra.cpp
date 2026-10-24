#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    string contrasena;
    cout << "Ingrese la contrasena: ";
    cin >> contrasena;

    bool tieneMayuscula = false;
    bool tieneMinuscula = false;
    bool tieneDigito = false;
    bool tieneSimbolo = false;

    bool tieneLongitud = contrasena.length() >= 8;

    for (int i = 0; i < contrasena.length(); i++) {
        char c = contrasena[i];
        if (isupper(c)) tieneMayuscula = true;
        else if (islower(c)) tieneMinuscula = true;
        else if (isdigit(c)) tieneDigito = true;
        else if (!isspace(c)) tieneSimbolo = true;
    }

    bool valida = tieneLongitud && tieneMayuscula && tieneMinuscula && tieneDigito && tieneSimbolo;

    if (!valida) {
        if (!tieneLongitud) cout << "Debe tener al menos 8 caracteres." << endl;
        if (!tieneMayuscula) cout << "Falta al menos una letra mayuscula." << endl;
        if (!tieneMinuscula) cout << "Falta al menos una letra minuscula." << endl;
        if (!tieneDigito) cout << "Falta al menos un digito." << endl;
        if (!tieneSimbolo) cout << "Falta al menos un simbolo." << endl;
        cout << "Contrasena invalida." << endl;
    } else {
        cout << "Contrasena valida." << endl;
    }

    return 0;
}