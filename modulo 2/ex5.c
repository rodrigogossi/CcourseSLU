#include <stdio.h>

int main() {
    float diametro, raio, area;

    // Solicita ao usuário o diâmetro do círculo
    printf("Digite o diametro do circulo: ");
    scanf("%f", &diametro);

    // Calcula o raio
    raio = diametro / 2;

    // Calcula a área usando o valor de PI definido
    area = 3.14159 * raio * raio;

    // Imprime o raio e a área calculados
    printf("O raio do circulo eh: %.2f\n", raio);
    printf("A area do circulo eh: %.2f\n", area);

    return 0;
}