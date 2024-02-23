#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese un numero para verificar si es par o impar: ";
    std::cin >> numero;

    if (numero % 2 == 0) {
        std::cout << numero << " es un numero par.\n";
    } else {
        std::cout << numero << " es un numero impar.\n";
    }

    return 0;
}