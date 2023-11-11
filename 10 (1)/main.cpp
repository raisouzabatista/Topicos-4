#include <iostream>

int main() {
    int inferior, superior;
    std::cout << "Digite o limite inferior: ";
    std::cin >> inferior;
    std::cout << "Digite o limite superior: ";
    std::cin >> superior;

    std::cout << "Os números ímpares entre " << inferior << " e " << superior << " são:\n";
    for (int i = inferior; i <= superior; i++) {
        if (i % 2 != 0) {
            std::cout << i << "\n";
        }
    }

    return 0;
}
