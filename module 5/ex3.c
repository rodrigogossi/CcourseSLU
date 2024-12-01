#include <stdio.h>

// Declaração da variável global
int x = 10;

// Função que utiliza uma variável local chamada x
void modificarVariavelLocal() {
    int x = 50; // Variável local
    printf("Valor de x dentro da função (variável local): %d\n", x);
    x = 100; // Modifica a variável local
    printf("Valor de x dentro da função após modificação (variável local): %d\n", x);
}

int main() {
    // Imprime o valor da variável global antes
    printf("Valor de x antes da função (variável global): %d\n", x);
    
    // Chama a função com a variável local
    modificarVariavelLocal();
    
    // Imprime o valor da variável global após chamar a função
    printf("Valor de x depois da função (variável global): %d\n", x);
    
    return 0;
}
