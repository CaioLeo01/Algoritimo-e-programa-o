#include<stdio.h>
int main(){

    int numero, guarda_maior, guarda_menor;
    int i;

    printf("Entre com o primeiro numero inteiro: \n ");
    scanf("%i", &numero);

    guarda_maior=numero;
    guarda_menor=numero;

    for(i=1; i<10; i++){

    printf("\n Entre com o %do numero inteiro: ",i+1);
    scanf("%i", &numero);

    if(numero>guarda_maior)
    guarda_maior=numero;
    else if(numero<guarda_menor)
        guarda_menor=numero;
    }


    printf("\n O menor numero que entrou e: %d", guarda_menor);
    printf("\n O maior numero que entrou e: %d", guarda_maior);

}