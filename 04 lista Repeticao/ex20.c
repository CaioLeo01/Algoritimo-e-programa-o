#include<stdio.h>

int main() {

    int soma = 0, num_fruta, quantidade, cont;
    
    do{
        printf("1 => ABACAXI 5,00 a unidade \n");
        printf("2 => MACA 1,00 a unidade \n");
        printf("3 => PERA 4,00 a unidade \n");
        printf("Digite o numero da fruta que deseja comprar: \n ");
        scanf("%d", &num_fruta);
        
        if (num_fruta == 1){
            printf("Digite a quantidade de abacaxi que deseja: ");
            scanf("%d", &quantidade);
            soma += 1;
            }
    }
    while (cont == -1);
}