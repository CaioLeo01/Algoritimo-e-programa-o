#include<stdio.h>
#include <time.h>

int main(void){
int contagem;
float n1;
char nome;

while (n1 <= 1 || n1 >=10)
{
printf("Digite um numero\n");
scanf("%f", &n1);
fflush(stdin);   
}

do
{
    printf("Digite um numero real\n");
    scanf("%c", &nome);
    fflush(stdin);
} while (nome != 'c');

for (contagem = 1; contagem <= 6; contagem ++)
{
   


printf("repete");
scanf("%i", &n1);
fflush(stdin);
}




return 0;






    
}