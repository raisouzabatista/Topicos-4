#include <iostream>

int main() {
    int num;
    double somaPar = 0;
    double somaImpar = 0;
    int contadorPar = 0; 
    int contadorImpar = 0;

    for (int i = 0; i < 20; i++) {
        std::cout << "Digite o " << i+1 << "º número: ";
        std::cin >> num;
        if (num % 2 == 0) {
            somaPar += num;
            contadorPar++;
        } else {
            somaImpar += num;
            contadorImpar++;
        }
    }

    if (contadorPar > 0) {
        std::cout << "A média aritmética dos números pares é: " << somaPar / contadorPar << "\n";
    } else {
        std::cout << "Nenhum número par foi digitado.\n";
    }

    if (contadorImpar > 0) {
        std::cout << "A média aritmética dos números ímpares é: " << somaImpar / contadorImpar << "\n";
    } else {
        std::cout << "Nenhum número ímpar foi digitado.\n";
    }

    return 0;
}
