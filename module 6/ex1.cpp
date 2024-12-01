#include <iostream>
using namespace std;

int main() {
    int arr[5];

    // Preenchendo o vetor com números fornecidos pelo usuário
    cout << "Digite 5 números inteiros: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    // Imprimindo os números em ordem reversa
    cout << "Números em ordem reversa: ";
    for (int i = 4; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}
