#include <stdio.h>

// Função que incrementa o valor passado por valor
void incrementarPorValor(int num) {
    num = num + 1;
    printf("Dentro de incrementarPorValor: %d\n", num);
}

// Função que incrementa o valor passado por referência
void incrementarPorReferencia(int *num) {
    *num = *num + 1;
    printf("Dentro de incrementarPorReferencia: %d\n", *num);
}

int main() {
    int a = 5;
    int b = 5;

    printf("Valor inicial de a (por valor): %d\n", a);
    incrementarPorValor(a);
    printf("Valor de a após incrementarPorValor: %d\n\n", a);

    printf("Valor inicial de b (por referência): %d\n", b);
    incrementarPorReferencia(&b);
    printf("Valor de b após incrementarPorReferencia: %d\n", b);

    return 0;
}
