#include <iostream>

int main() {
    int num;
    std::cout << "Digite um número positivo ou -1 para sair: ";
    std::cin >> num;
    
    while (num != -1) {
        if (num % 2 == 0) {
            std::cout << num << " é par\n";
        } else {
            std::cout << num << " é ímpar\n";
        }
        std::cout << "Digite um número positivo ou -1 para sair: ";
        std::cin >> num;
    }
    return 0;
}
