#include <iostream>

int main() {
    int numero;
    std::cout << "Ingrese el numero de terminos de la serie de Fibonacci que desea generar: ";
    std::cin >> numero;

    int primero = 0;
    int segundo = 1;

    std::cout << "Serie de Fibonacci hasta el termino " << numero << ":\n";

    if (numero >= 1) {
        std::cout << primero << " ";
    }
    if (numero >= 2) {
        std::cout << segundo << " ";
    }

    for (int i = 3; i <= numero; ++i) {
        int siguiente = primero + segundo;
        std::cout << siguiente << " ";
        primero = segundo;
        segundo = siguiente;
    }

    std::cout << std::endl;

    return 0;
}