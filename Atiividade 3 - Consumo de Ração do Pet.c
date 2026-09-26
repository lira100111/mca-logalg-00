#include <stdio.h>

int main (){
    int racao_peso; // peso do saco de ração em kg
    float racao_consumida; //consumo do cão em gramas
    int consumo_diario; // consumo diario em 5 dias
    int racao_restante; // Ração resultante

    printf("\tConsumo de Ração do Pet");
    printf("\nInsira o peso do saco de ração (em kg): ");
    scanf("%d",&racao_peso);

    printf("\nInsira o consumo realizado pelo cão (em g): ");
    scanf("%f", &racao_consumida);

    consumo_diario = racao_consumida * 5; //  Multiplica o consumo em gramas pelos 5 dias
    racao_restante = (racao_peso - consumo_diario); // Mostra o valor da ração restante

    printf("\nO número em Kg restantes da ração é de: %d", racao_restante);

    return 0;

    // Para resultados mais precisos, é melhor utilizar 0.200 para representar 200 gramas por exemplo
}
