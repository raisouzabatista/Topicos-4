#include <iostream>
#include <cmath>

int main() {
    int N;
    double num;
    std::cout << "Digite o valor de N: ";
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cout << "Digite o " << i+1 << "º número: ";
        std::cin >> num;
        std::cout << "A metade do número é: " << num / 2 << "\n";
        std::cout << "A raiz cúbica do número é: " << cbrt(num) << "\n";
    }
    return 0;
}
