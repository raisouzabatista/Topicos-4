#include <iostream>

int main() {
    int N;
    std::cout << "Digite um número inteiro e positivo: ";
    std::cin >> N;
    for (int i = 1; i <= 10; i++) {
        std::cout << N << " x " << i << " = " << N * i << "\n";
    }
    return 0;
}
