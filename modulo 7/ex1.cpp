#include <iostream>
#include <string>

using namespace std;

int main() {
  string texto1;
  cout << "Digite uma string: ";
  getline(cin, texto1);
  cout << "Você digitou: " << texto1 << endl;
  return 0;
}