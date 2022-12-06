#include<stdio.h>

int main() {
    int num;

    printf("Digite um numero: \n ");
    scanf("%d", &num);

    printf("Seus divisores sao: \n");

    for(int i = 1; i < num; i++){
        if(num % i == 0){
            printf("%d \n", i);
        }
    }
    return 0;
}