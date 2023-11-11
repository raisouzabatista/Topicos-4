#include <iostream>

int main() {
    char sexo;
    int masculino = 0;
    int feminino = 0;
    std::cout << "Digite o sexo da pessoa (m para masculino, f para feminino, @ para sair): ";
    std::cin >> sexo;
    while (sexo != '@') {
        if (sexo == 'm') {
            masculino++;
        } else if (sexo == 'f') {
            feminino++;
        }
        std::cout << "Digite o sexo da pessoa (m para masculino, f para feminino, @ para sair): ";
        std::cin >> sexo;
    }
    std::cout << "Quantidade de pessoas do sexo masculino: " << masculino << "\n";
    std::cout << "Quantidade de pessoas do sexo feminino: " << feminino << "\n";
    return 0;
}
