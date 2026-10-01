#include <stdio.h>

int main() {
    int total_moedas, exploradores;

    printf("Digite o total de moedas de ouro: ");
    scanf("%d", &total_moedas);

    printf("Digite o numero de exploradores: ");
    scanf("%d", &exploradores);

    int moedas_por_membro = total_moedas / exploradores;
    int sobras_lider = total_moedas % exploradores;

    printf("Cada explorador recebera: %d moedas\n", moedas_por_membro);
    printf("Moedas restantes para o lider: %d moedas\n", sobras_lider);

    return 0;
}
