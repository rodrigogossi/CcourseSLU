#include <iostream>
using namespace std;

int main() {
    int idade;

    // Solicita que o usuário insira a idade
    cout << "Digite a idade: ";
    cin >> idade;

    // Verifica a faixa etária e exibe o resultado
    if (idade < 18) {
        cout << "Menor de idade." << endl;
    } else if (idade <= 64) {
        cout << "Adulta." << endl;
    } else {
        cout << "Idosa." << endl;
    }

    return 0;
}
