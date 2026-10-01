#include <stdio.h>

int main() {
    int qte_10, qte_25, qte_50;

    printf("Digite a quantidade de moedas de R$ 0.10: ");
    scanf("%d", &qte_10);

    printf("Digite a quantidade de moedas de R$ 0.25: ");
    scanf("%d", &qte_25);

    printf("Digite a quantidade de moedas de R$ 0.50: ");
    scanf("%d", &qte_50);

    float total = (qte_10 * 0.10) + (qte_25 * 0.25) + (qte_50 * 0.50);

    printf("Valor total poupado: R$ %.2f\n", total);

    return 0;
}
