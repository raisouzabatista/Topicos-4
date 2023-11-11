#include <iostream>

int main() {
    int N;
    double num; 
    double soma = 0;
    std::cout << "Digite o valor de N: ";
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cout << "Digite o " << i+1 << "º número: ";
        std::cin >> num;
        soma += num;
    }
    std::cout << "A soma dos números é: " << soma << "\n";
    return 0;
}
