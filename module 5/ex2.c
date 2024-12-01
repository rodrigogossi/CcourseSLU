#include <stdio.h>

int x = 10; // Declara a variável global x e inicializa com 10

// Função que modifica a variável global x
void modifica_x() {
  x = 20; // Modifica o valor de x para 20
}

int main() {
  printf("Valor de x antes da chamada da função: %d\n", x); // Imprime o valor de x antes
  modifica_x(); // Chama a função que modifica x
  printf("Valor de x depois da chamada da função: %d\n", x); // Imprime o valor de x depois

  return 0;
}