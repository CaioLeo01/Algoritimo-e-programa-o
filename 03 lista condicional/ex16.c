#include<stdio.h>
#include<math.h>
 
int main(){

char operador;
float n1,n2, resultado ;

printf("digite o operador:");
scanf("%c" , &operador);

printf("digite os numeros que deseja calcular: ");
scanf("%f%f", &n1, &n2);

switch (operador)
{

case '+':
resultado = n1 + n2;
printf("soma:%0.1f", resultado); 
break;

case '-':
 resultado = n1 - n2;
 printf("subtracao: %0.1f",  resultado);
break;

case'*':
resultado = n1 * n2;
printf("multiplicacao: %0.1f", resultado);
break;

case '/': 
resultado = n1 / n2;
printf("divisao: %0.1f", resultado);
break;

case '^': 
resultado = pow(n1,n2);
printf("potnciacao: %0.1f", resultado);
break;

case 'r' :
resultado = sqrt(n1);
printf("raiz: %0.1f" , resultado);
break;

default :
{
    printf("Operacao invalida!");
}
}
}