#include <iostream>
#include <limits>

int main() {
    int idade, menor = std::numeric_limits<int>::max(), maior = -std::numeric_limits<int>::max();
    double soma = 0, media;
    int contador = 0;

    std::cout << "Digite a idade da pessoa ou -1 para sair: ";
    std::cin >> idade;
    while (idade != -1) {
        if (idade < menor) {
            menor = idade;
        }
        if (idade > maior) {
            maior = idade;
        }
        soma += idade;
        contador++;

        std::cout << "Digite a idade da pessoa ou -1 para sair: ";
        std::cin >> idade;
    }

    if (contador > 0) {
        media = soma / contador;
        std::cout << "A menor idade é: " << menor << "\n";
        std::cout << "A maior idade é: " << maior << "\n";
        std::cout << "A média aritmética das idades é: " << media << "\n";
    } 

    return 0;
}
