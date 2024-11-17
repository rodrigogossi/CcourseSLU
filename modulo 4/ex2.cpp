#include <iostream>

using namespace std;

int main() {
  int x;

  cout << "Digite um número inteiro para calcular a tabuada: ";
  cin >> x;

  cout << "Tabuada de " << x << ":" << endl;

  for (int i = 1; i <= 10; i++) {
    cout << x << " x " << i << " = " << x * i << endl;
  }

  return 0;
}