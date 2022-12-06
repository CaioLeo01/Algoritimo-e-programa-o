#include<stdio.h>
#include<string.h>

int main() {

    char sexo;
    
    do{
        printf("Sexo: \n ");
        scanf(" %c", &sexo);
        fflush(stdin);
    } 
    while (strcmp(sexo != 'm'));
}