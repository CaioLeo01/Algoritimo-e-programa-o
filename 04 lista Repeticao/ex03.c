#include<stdio.h>

int main () {
    int num, cal;

    printf("Digite um numero: \n ");
    scanf("%d", &num);

    cal = num + 1 + (num % 2);

    for (int i = 0; i < num; i++) {
        printf("%d \n", cal);
        cal += 2;
    } 
}