#include <stdio.h>
#include <math.h>

int main() {

int repeticao = 0;
int a, b, c, d, n5, n6, n7;


while (repeticao != 2)
{
 printf("Digite o valor de A\n");
 scanf("%i", &a);
 printf("Digite o valor de B\n");
 scanf("%i", &b);
 printf("Digite o valor de C\n");
 scanf("%i", &c);
 printf("Digite o valor de D\n");
 scanf("%i", &d);
 
n5 = c + d;
n6 = a + b;

 if (b > c && d > a && n5 > n6 && c >= 0 && d >= 0 && a % 2 == 0)
 {

    printf("Valores aceito\n");
 }
 
 else
 {
    printf("Valor revogado\n");
 }
 


printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);



   
}



}