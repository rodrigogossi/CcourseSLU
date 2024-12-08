#include <iostream>
#include <string>

using namespace std;

int main() {
  string texto2;
  int contador = 0;
  cout << "Digite outra string: ";
  getline(cin, texto2);
  for (char c : texto2) {
    contador++;
  }
  cout << "A string tem " << contador << " caracteres." << endl;
  return 0;
}