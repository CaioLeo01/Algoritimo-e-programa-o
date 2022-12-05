#include <stdio.h>

int main() {

int a, b, c, d, Diferenca;

 printf("Digite o valor de A\n");
 scanf("%i", &a);
 fflush(stdin);

 printf("Digite o valor de b\n");
 scanf("%i", &b);
fflush(stdin);

printf("Digite o valor de C\n");
 scanf("%i", &c);
 fflush(stdin);

 printf("Digite o valor de D\n");
 scanf("%i", &d);
 fflush(stdin);

Diferenca = (a * b - c * d);

printf("DIFERENCA = (valor de A = %i * valor de B = %i - valor de C = %i * valor de D = %i)\n", a, b, c, d);
printf(" Diferenca = valor de diferenca = %i", Diferenca);









}