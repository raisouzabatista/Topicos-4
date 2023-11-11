#include <iostream>

int main() {
    int idade, menor = 999999, maior = -999999;
    double soma = 0, media;
    int contador = 0;

    for (int i = 0; i < 20; i++) {
        std::cout << "Digite a idade da " << i+1 << "ª pessoa: ";
        std::cin >> idade;
        if (idade < menor) {
            menor = idade;
        }
        if (idade > maior) {
            maior = idade;
        }
        soma += idade;
        contador++;
    }

    if (contador > 0) {
        media = soma / contador;
        std::cout << "A menor idade é: " << menor << "\n";
        std::cout << "A maior idade é: " << maior << "\n";
        std::cout << "A média aritmética das idades é: " << media << "\n";
    } else {
        std::cout << "Nenhuma idade foi digitada.\n";
    }

    return 0;
}
