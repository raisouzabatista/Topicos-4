#include <iostream>

int main() {
    int N;
    unsigned long long fatorial = 1;
    std::cout << "Digite um número inteiro e positivo: ";
    std::cin >> N;
    for(int i = 1; i <= N; ++i) {
        fatorial = i *fatorial;
    }
    std::cout << "O fatorial de " << N << " é: " << fatorial << "\n";
    return 0;
}
