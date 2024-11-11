#include <iostream>
using namespace std;

int main() {
    int nota;

    // Solicita que o usuário insira a nota
    cout << "Digite a nota (0 a 100): ";
    cin >> nota;

    // Verifica o intervalo da nota e imprime o conceito correspondente
    if (nota < 0 || nota > 100) {
        cout << "Erro: nota fora do intervalo permitido." << endl;
    } else if (nota <= 49) {
        cout << "Conceito: F" << endl;
    } else if (nota <= 59) {
        cout << "Conceito: D" << endl;
    } else if (nota <= 69) {
        cout << "Conceito: C" << endl;
    } else if (nota <= 79) {
        cout << "Conceito: B" << endl;
    } else {
        cout << "Conceito: A" << endl;
    }

    return 0;
}
