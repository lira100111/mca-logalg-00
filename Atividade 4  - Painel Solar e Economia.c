    #include <stdio.h>

    int main (){

        int paineis_instalados;
        float valor_cobrado;
        float geracao_kWh;
        float economia;


        printf(" - - Tarifa Painel Solar - -");

        printf("\nDigite o número de paineis instalados: ");
        scanf("%d", &paineis_instalados);

        printf("\nDigite o valor cobrado pela concessionária (Em R$): ");
        scanf("%f", &valor_cobrado);

        geracao_kWh = 1.2 * valor_cobrado; // Tarifa vezes o kWh que resulta a geração de energia dos painéis
        economia = paineis_instalados  * (geracao_kWh * 30);  // A economia calcula a geração em 30 dias, vezes o número de paineis

        printf("\nEconomia gerada no mês: R$%f",economia);


        return 0;
    }
