#include <stdio.h>

int main() {


int n1;
float r1;
double r2;
char letra;
char palavra[999];
int n2;




printf("Digite um numero inteiro\n");
scanf("%i", &n1);
fflush(stdin);

printf("Digite um numero real\n");
scanf("%f", &r1);
fflush(stdin);

printf("Digite outro numero real\n");
scanf("%lf", &r2);
fflush(stdin);

printf("Digite uma letra \n");
scanf("%c", &letra);
fflush(stdin);

printf("Digite uma palavra\n");
scanf("%s", &palavra);
fflush(stdin);

printf("Digite um numero e vou te informar se eh par\n");
scanf("%i", &n2);
fflush(stdin);



printf("Numero inteiro:%i\n", n1);
printf("Numero reais:\n%.2f\n%.4lf\n", r1, r2);
printf("Letra:%c\n", letra);
printf("string:%s\n", palavra);



if (n2 % 2 == 0)
{
    printf("Verdadeiro,eh par");
}
 else
 {
    printf("Falso,nao eh par");
 }








}