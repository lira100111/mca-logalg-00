#include <stdio.h>

int main() {
    float largura, altura;

    printf("Digite a largura da parede (em metros): ");
    scanf("%f", &largura);

    printf("Digite a altura da parede (em metros): ");
    scanf("%f", &altura);

    float area = largura * altura;
    float litros_tinta = area / 3.0;

    printf("Area total da parede: %.2f m2\n", area);
    printf("Quantidade de tinta necessaria: %.2f litros\n", litros_tinta);

    return 0;
}
