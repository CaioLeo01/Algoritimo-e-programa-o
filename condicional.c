#include<stdio.h>
int main(){
    int idade;

    printf("Informe a idade desejADA: ");
    scanf("%d", idade);
    //se(idade >=16)
    //entao escreve ("pode votar");
    //senao: escreva("nao pode votar");

    if (idade >=16)
    printf("pode votar!\n");
    else printf("nao pode votar!\n");
}