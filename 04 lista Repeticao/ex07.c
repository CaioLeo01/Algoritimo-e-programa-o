#include<stdio.h>

int main() {
    int n1, n2, n3, n4, n5, n6, n7, n8, n9, n10, resultado;

     do {
    
        printf("Digite o primeiro numero: ");
        scanf("%d", &n1);
        printf("Digite o segundo numero: ");
        scanf("%d", &n2);
        printf("Digite o terceiro numero: ");
        scanf("%d", &n3);
        printf("Digite o quarto numero: ");
        scanf("%d", &n4);
        printf("Digite o quinto numero: ");
        scanf("%d", &n5);
        printf("Digite o sexto numero: ");
        scanf("%d", &n6);
        printf("Digite o sétimo numero: ");
        scanf("%d", &n7);
        printf("Digite o oitavo numero: ");
        scanf("%d", &n8);
        printf("Digite o nono numero: ");
        scanf("%d", &n9);
        printf("Digite o décimo numero: ");
        scanf("%d", &n10);

        resultado = n1 + n2 + n3 + n4 + n5 + n6 + n7 + n8 + n9 + n10;

        printf("Resultado: %d", resultado);
     } while (n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 == 0 || n1, n2, n3, n4, n5, n6, n7, n8, n9, n10 < 0);    
}