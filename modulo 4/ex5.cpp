#include <iostream>

using namespace std;

int main() {
  int numero, maior;

  cout << "Digite 10 números inteiros:" << endl;

  // Lê o primeiro número e o define como o maior inicialmente
  cin >> numero;
  maior = numero;

  // Loop for para ler os demais números e atualizar o maior
  for (int i = 1; i < 10; ++i) {
    cin >> numero;
    if (numero > maior) {
      maior = numero;
    }
  }

  cout << "O maior número é: " << maior << endl;

  return 0;
}