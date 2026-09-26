#include <stdio.h>

int main (){
    float valor_arrecadado;
    float valor_guardado;
    float valor_dividido; //variáveis utilizadas como float para representação em moeda

    printf("Digite o valor da venda total: ");
    scanf("%f", &valor_arrecadado);

    valor_guardado = 0.10 * valor_arrecadado;
    valor_dividido  = (valor_arrecadado - valor_guardado) / 3;  //valor_dividido  subtrai com valor_guardado
                                                               // para que 10% esteja guardado para a compra de limões e divide entre os 3

    printf("\nValor dividido entre os 3 amigos: %f", valor_dividido);
    printf("\nValor guardado para a compra de limões: %f", valor_guardado);


    return 0;
}
