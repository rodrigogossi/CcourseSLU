#include <iostream>
using namespace std;

int main() {
    int mes, dia;

    // Solicita o mês e o dia ao usuário
    cout << "Digite o mes (1 a 12): ";
    cin >> mes;
    cout << "Digite o dia (1 a 31): ";
    cin >> dia;

    // Verifica a estação do ano no hemisfério sul
    if ((mes == 12 && dia >= 21) || mes == 1 || mes == 2 || (mes == 3 && dia <= 20)) {
        cout << "Estacao: Verao" << endl;
    } else if ((mes == 3 && dia >= 21) || mes == 4 || mes == 5 || (mes == 6 && dia <= 20)) {
        cout << "Estacao: Outono" << endl;
    } else if ((mes == 6 && dia >= 21) || mes == 7 || mes == 8 || (mes == 9 && dia <= 20)) {
        cout << "Estacao: Inverno" << endl;
    } else if ((mes == 9 && dia >= 21) || mes == 10 || mes == 11 || (mes == 12 && dia <= 20)) {
        cout << "Estacao: Primavera" << endl;
    } else {
        cout << "Data invalida." << endl;
    }

    return 0;
}
