#include <iostream>

int main() {

    std::cout << "Tabla de multiplicar del 4:"<< std::endl; // Tabla de multiplicar del 4
    for(int i = 1; i <= 10; ++i) {
        std::cout << "4 x " << i << " = " << 4*i << std::endl;
    }


    std::cout << "Tabla de multiplicar del 6:"<< std::endl; // Tabla de multiplicar del 6
    for(int i = 1; i <= 10; ++i) {
        std::cout << "6 x " << i << " = " << 6*i << std::endl;
    }

    return 0;
}
