#include <iostream>

bool esPrimo(int numero) {
    if(numero <= 1) {
        return false;
    }
    for(int i = 2; i * i <= numero; ++i) {
        if(numero % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numero;
    std::cout << "Ingrese un numero para verificar si es primo: ";
    std::cin >> numero;

    if (esPrimo(numero)) {
        std::cout << numero << " es un numero primo.\n";
    } else {
        std::cout << numero << " no es un numero primo.\n";
    }

    return 0;
}