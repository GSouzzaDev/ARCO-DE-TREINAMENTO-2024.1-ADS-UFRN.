#include <iostream>

int main() {
    // Declara��o das vari�veis para armazenar os dois n�meros
    int num1, num2, soma;

    // Solicita ao usu�rio que insira o primeiro n�mero
    std::cout << "Digite o primeiro n�mero: ";
    std::cin >> num1;

    // Solicita ao usu�rio que insira o segundo n�mero
    std::cout << "Digite o segundo n�mero: ";
    std::cin >> num2;

    // Calcula a soma dos dois n�meros
    soma = num1 + num2;

    // Exibe o resultado da soma
    std::cout << "A soma de " << num1 << " e " << num2 << " �: " << soma << std::endl;

    return 0;
}

