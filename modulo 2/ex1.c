#include <stdio.h>

int main() {
  int num1, num2, soma;

  printf("Digite o primeiro número: ");
  scanf("%d", &num1);

  printf("Digite o segundo número: ");
  scanf("%d", &num2);

  soma = num1 + num2;

  printf("A soma de %d e %d é: %d\n", num1, num2, soma);

  return 0;
}