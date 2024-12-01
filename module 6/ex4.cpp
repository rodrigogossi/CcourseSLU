#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    // Preenchendo a matriz com números fornecidos pelo usuário
    cout << "Digite os 9 números para preencher a matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    // Imprimindo a diagonal principal
    cout << "Diagonal principal da matriz: ";
    for (int i = 0; i < 3; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}
