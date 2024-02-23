#include <iostream>

int main() {
    int numero;
    long long factorial = 1;

    std::cout << "Ingrese un numero para calcular su factorial: ";
    std::cin >> numero;

    if (numero < 0) {
        std::cout << "El factorial de un numero negativo no esta definido.\n";
    } else {
        for(int i = 1; i <= numero; ++i) {
            factorial *= i;
        }
        std::cout << "El factorial de " << numero << " es: " << factorial << std::endl;
    }

    return 0;
}