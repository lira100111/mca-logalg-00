#include <stdio.h>

int main(){
    int segundos_percorridos;
    int conversor_horas;
    int minutos_percorridos;

    printf("Digite o número de segundos percorridas: ");
    scanf("%d", &segundos_percorridos);

    conversor_horas = segundos_percorridos / 3600; // Converte os segundos para horas (utilizando 3600 como formato para 1 H)
    minutos_percorridos = (segundos_percorridos % 3600) / 60 ; // Realiza o módulo da divisão dos segundos com a hora, pega o resto e divide por 60 para ter os minutos percorridos

    printf("Horas percorridas: %d Hora(s)", conversor_horas);
    printf("\nMinutos: %d",minutos_percorridos);


    return 0;
}
