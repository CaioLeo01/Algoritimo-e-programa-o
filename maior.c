#include<stdio.h>
int main()
{
   int valor1, valor2;
printf("Digite dois valores:");
scanf("%d%d", &valor1, &valor2);
 
if(valor1 > valor2)
printf("o numero 1 (%d) e maior que o numero 2 (%d)\n",valor1,valor2);
else printf( "o numero 2 (%d) e maior que o numero 1 (%d)\n",valor2, valor1);



}
