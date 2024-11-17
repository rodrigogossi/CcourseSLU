#include <iostream>

using namespace std;

int main() {
  int n, i = 1, soma = 0;

  cout << "Digite um número inteiro positivo: ";
  cin >> n;

  // Validação da entrada
  if (n <= 0) {
    cout << "O número deve ser positivo." << endl;
    return 1; // Indica erro
  }

  while (i <= n) {
    soma += i;
    i++;
  }

  cout << "A soma dos primeiros " << n << " números inteiros é: " << soma << endl;

  return 0;
}