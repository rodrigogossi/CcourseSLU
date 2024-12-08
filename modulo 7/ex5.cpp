#include <iostream>
#include <string>

using namespace std;

int main() {
  string texto3;
  char caractere;
  cout << "Digite uma string: ";
  getline(cin, texto3);
  cout << "Digite um caractere para substituir por '*': ";
  cin >> caractere;
  for (int i = 0; i < texto3.length(); i++) {
    if (texto3[i] == caractere) {
      texto3[i] = '*';
    }
  }
  cout << "String modificada: " << texto3 << endl;
  return 0;
}