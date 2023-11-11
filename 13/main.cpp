#include <iostream>
#include <limits>

int main() {
    int N;
    double num;
    double maior = -9999999; 
    double menor = 9999999;
    double somar = 0; 
    std::cout << "Digite o valor de N: ";
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cout << "Digite o " << i+1 << "º número: ";
        std::cin >> num;
        somar+= num; 
        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    std::cout << "O maior número é: " << maior << "\n";
    std::cout << "O menor número é: " << menor << "\n";
        std::cout << "O somátorio é: " << somar << "\n";

    return 0;
}
