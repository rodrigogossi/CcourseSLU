#include <iostream>

using namespace std;

int main() {
  int n;

  cout << "Digite o número de termos da sequência de Fibonacci: ";
  cin >> n;

  if (n <= 0) {
    cout << "Por favor, digite um número inteiro positivo." << endl;
    return 1;
  }

  int a = 0, b = 1, c;

  cout << "Sequência de Fibonacci: ";

  // Imprime os dois primeiros termos (0 e 1)
  if (n >= 1) {
    cout << a << " ";
  }
  if (n >= 2) {
    cout << b << " ";
  }

  // Calcula e imprime o restante dos termos usando um loop for
  for (int i = 3; i <= n; ++i) {
    c = a + b;
    cout << c << " ";
    a = b;
    b = c;
  }

  cout << endl;

  return 0;
}