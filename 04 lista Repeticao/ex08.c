#include<stdio.h>

int main() {
    float n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, media;

    do {
    
        printf("Digite o primeiro numero: ");
        scanf("%f", &n1);
        printf("Digite o segundo numero: ");
        scanf("%f", &n2);
        printf("Digite o terceiro numero: ");
        scanf("%f", &n3);
        printf("Digite o quarto numero: ");
        scanf("%f", &n4);
        printf("Digite o quinto numero: ");
        scanf("%f", &n5);
        printf("Digite o sexto numero: ");
        scanf("%f", &n6);
        printf("Digite o sétimo numero: ");
        scanf("%f", &n7);
        printf("Digite o oitavo numero: ");
        scanf("%f", &n8);
        printf("Digite o nono numero: ");
        scanf("%f", &n9);
        printf("Digite o décimo numero: ");
        scanf("%f", &n10);

        media = (n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10) / 10;

        printf("Resultado: %.2f", media);
    } while (n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 == 0 || n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 < 0);   
}