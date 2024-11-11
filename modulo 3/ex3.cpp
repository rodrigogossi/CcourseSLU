#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta;

    // Solicita os coeficientes ao usuário
    cout << "Digite o coeficiente a: ";
    cin >> a;
    cout << "Digite o coeficiente b: ";
    cin >> b;
    cout << "Digite o coeficiente c: ";
    cin >> c;

    // Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    // Determina o tipo de raízes com base no valor de delta
    if (delta > 0) {
        cout << "A equacao tem duas raizes reais distintas." << endl;
    } else if (delta == 0) {
        cout << "A equacao tem uma raiz real (raizes iguais)." << endl;
    } else {
        cout << "A equacao tem raizes complexas." << endl;
    }

    return 0;
}
