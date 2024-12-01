#include <stdio.h>

// Função que recebe dois inteiros e retorna a soma deles
int soma(int num1, int num2) {
  return num1 + num2;
}

int main() {
  int numero1, numero2, resultado;

  printf("Digite o primeiro número: ");
  scanf("%d", &numero1);

  printf("Digite o segundo número: ");
  scanf("%d", &numero2);

  // Chamando a função soma e armazenando o resultado
  resultado = soma(numero1, numero2);

  printf("A soma de %d e %d é: %d\n", numero1, numero2, resultado);

  return 0;
}