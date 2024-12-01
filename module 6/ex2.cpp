#include <iostream>
using namespace std;

int main() {
    float arr[10];
    float soma = 0.0;

    // Preenchendo o vetor com números fornecidos pelo usuário
    cout << "Digite 10 números de ponto flutuante: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
        soma += arr[i];  // Somando os números para calcular a média
    }

    // Calculando a média
    float media = soma / 10;

    // Imprimindo a média
    cout << "A média dos números é: " << media << endl;

    return 0;
}
