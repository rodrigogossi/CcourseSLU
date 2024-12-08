#include <iostream>
#include <string>

using namespace std;

int main() {
  string palavra;
  cout << "Digite uma palavra: ";
  getline(cin, palavra);
  bool ehPalindromo = true;
  for (int i = 0; i < palavra.length() / 2; i++) {
    if (palavra[i] != palavra[palavra.length() - i - 1]) {
      ehPalindromo = false;
      break;
    }
  }
  if (ehPalindromo) {
    cout << palavra << " é um palíndromo." << endl;
  } else {
    cout << palavra << " não é um palíndromo." << endl;
  }
  return 0;
}