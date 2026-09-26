#include <stdio.h>
// O Código está completo de funções recursivas, perdoe pelo excesso

int tabela_mana_energia(int);
int main (){
    int mana_inicial = 0;
    printf("Hello World!");
    tabela_mana_energia(mana_inicial);
    return 0;
}

int tabela_mana_energia(int mana){
   int escolha;
   printf("\n -- Tabela de Poções -- ");
   printf("\n 1 - Escolher Poção de Cura(Concede 15 pontos de Mana) \n 2 - Escolher Poção de Energia (Concede 25 pontos de mana)");
   printf("\n Mana atual: %d", mana);

   printf("\nDigite a sua escolha: ");
   scanf("%d", &escolha);

   switch(escolha){
    case 0:
        printf("Programa encerrado!");
        break;
    case 1:
        printf("Cura escolhida");
        mana = mana + 15;
        printf("\nMana Atualizada: %d", mana);
        tabela_mana_energia(mana);
        break;
    case 2:
        printf("Energia escolhida");
        mana = mana + 25;
        printf("\nMana Atualizada: %d", mana);
        tabela_mana_energia(mana);
        break;
    default:
        printf("Valor incorreto! Tente novamente...");
        tabela_mana_energia(mana);
   }


}
