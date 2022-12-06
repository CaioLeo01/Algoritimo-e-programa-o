#include<stdio.h>
int main(){
	
	int cont = 0, num, maior = 0, menor = 1000, soma = 0;
    float media;
	
    printf("Digite um numero: \n");
	scanf("%d", &num);
	
	while (num > 0){
        
		if (num > maior)
			maior = num;
		if (num < menor)
			menor = num;

        soma += num;
        printf("Soma: %d", soma);
        cont++;
        printf("Digite um numero: \n ");	
		scanf("%d", &num);
	}

    media = soma/cont;
	
    printf("Maior: %d \n", maior);
	printf("Menor: %d \n", menor);
    printf("Media: %.2f \n", media);
		
}