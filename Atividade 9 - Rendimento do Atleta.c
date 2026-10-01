#include <stdio.h>

int main() {
    float distancia_km, tempo_min;

    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distancia_km);

    printf("Digite o tempo gasto (em minutos): ");
    scanf("%f", &tempo_min);

    float tempo_horas = tempo_min / 60.0;
    float vm_kmh = distancia_km / tempo_horas;
    float vm_ms = vm_kmh / 3.6;

    printf("Velocidade media: %.2f km/h\n", vm_kmh);
    printf("Velocidade media: %.2f m/s\n", vm_ms);

    return 0;
}
