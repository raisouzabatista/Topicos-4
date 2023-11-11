#include <iostream>
#include <string>

int main() {
    std::string nome;
    int idade;
    char sexo;

    for (int i = 0; i < 20; i++) {
        std::cout << "Digite o nome da " << i+1 << "ª pessoa: ";
        std::cin >> nome;
        std::cout << "Digite a idade da " << i+1 << "ª pessoa: ";
        std::cin >> idade;
        std::cout << "Digite o sexo da " << i+1 << "ª pessoa (M para masculino e F para feminino): ";
        std::cin >> sexo;

        if (sexo == 'M' && idade > 21) {
            std::cout << "Nome: " << nome << "\n";
        }
    }

    return 0;
}
