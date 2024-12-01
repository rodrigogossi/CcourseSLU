#include <stdio.h>

// Função recursiva para calcular o fatorial
int fatorial(int n) {
    // Caso base: fatorial de 0 ou 1 é 1
    if (n == 0 || n == 1) {
        return 1;
    }
    
    // Variável local para armazenar o resultado intermediário
    int resultado = n * fatorial(n - 1);
    
    return resultado;
}

int main() {
    int numero;
    
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);
    
    if (numero < 0) {
        printf("Fatorial não está definido para números negativos.\n");
    } else {
        printf("O fatorial de %d é: %d\n", numero, fatorial(numero));
    }
    
    return 0;
}
