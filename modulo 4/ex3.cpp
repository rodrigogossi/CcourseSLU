#include <iostream>

using namespace std;

int main() {
  int n, i = 2;
  bool ehPrimo = true;

  cout << "Digite um número inteiro: ";
  cin >> n;

  // Casos especiais: 0, 1 e números negativos não são primos
  if (n <= 1) {
    ehPrimo = false;
  } else {
    while (i <= n / 2) {
      if (n % i == 0) {
        ehPrimo = false;
        break; // Sai do laço se encontrar um divisor
      }
      i++;
    }
  }

  if (ehPrimo) {
    cout << n << " é primo" << endl;
  } else {
    cout << n << " não é primo" << endl;
  }

  return 0;
}