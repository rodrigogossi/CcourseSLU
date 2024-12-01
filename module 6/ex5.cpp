#include <iostream>
using namespace std;

int main() {
    int matriz[2][3], transposta[3][2];

    // Preenchendo a matriz 2x3 com números fornecidos pelo usuário
    cout << "Digite os 6 números para preencher a matriz 2x3:" << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Calculando a transposta (convertendo a matriz 2x3 para 3x2)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            transposta[j][i] = matriz[i][j];
        }
    }

    // Imprimindo a matriz transposta
    cout << "Matriz transposta (3x2):" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << transposta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
