#include <stdio.h>

int main() {
    int quantidade;
    float preco_venda;
    float custo_unitario = 3.50 + 1.50 + 0.80;

    printf("Digite a quantidade de capinhas produzidas: ");
    scanf("%d", &quantidade);

    printf("Digite o preco de venda unitario: ");
    scanf("%f", &preco_venda);

    float custo_total = quantidade * custo_unitario;
    float faturamento_total = quantidade * preco_venda;
    float lucro_liquido = faturamento_total - custo_total;

    printf("Custo total de producao: R$ %.2f\n", custo_total);
    printf("Lucro liquido obtido: R$ %.2f\n", lucro_liquido);

    return 0;
}
