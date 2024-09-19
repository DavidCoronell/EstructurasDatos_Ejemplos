#include <iostream>
using namespace std;

// Función para encontrar el menor de dos números
int menor(int x, int y) {
    // Devuelve el menor entre x e y usando el operador ternario
    return x < y ? x : y;
}

// Declaración de la función para encontrar el menor de tres números
int menor3(int x, int y, int z);

int main() {
    int a, b, c;

    cout << "Escribe tres datos enteros: ";
    cin >> a >> b >> c;

    // Llama a la función menor3 para encontrar el menor de los tres
    cout << "El menor es de los tres numeros " << menor3(a, b, c) << endl;

    return 0;
}

// Definición de la función menor3
int menor3(int x, int y, int z) {
    // Utiliza la función menor recursivamente para encontrar el menor de tres
    return menor(menor(x, y), z);
}
