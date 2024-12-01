#include <iostream>
#include <cstdlib>  // para rand() e srand()
#include <ctime>    // para time()
using namespace std;

int main() {
    int arr[20];
    int menor, maior;

    // Inicializando o gerador de números aleatórios
    srand(time(0));

    // Preenchendo o vetor com números aleatórios entre 1 e 100
    cout << "Vetor de números aleatórios: ";
    for (int i = 0; i < 20; i++) {
        arr[i] = rand() % 100 + 1;
        cout << arr[i] << " ";
    }

    // Inicializando o menor e o maior com o primeiro elemento do vetor
    menor = maior = arr[0];

    // Encontrando o menor e o maior número
    for (int i = 1; i < 20; i++) {
        if (arr[i] < menor) menor = arr[i];
        if (arr[i] > maior) maior = arr[i];
    }

    // Imprimindo o menor e o maior número
    cout << "\nMenor número: " << menor << endl;
    cout << "Maior número: " << maior << endl;

    return 0;
}
