#include <stdio.h>

int main()
{

int numero;

printf("Digite um numero: ");
scanf("%d", &numero);

if(numero % 3 == 0 && numero % 5 == 0)
{
    printf("Invalido");
}

else if(numero % 3 == 0)
{
   printf("divisivel por 3");
}

else if( numero % 5 == 0)
{
    printf("divisivel por 5");
}

else if(numero % 3 == 0 && numero % 5 == 0)
{
    printf("Invalido");
}

else if(numero % 3 != 0 && numero % 5 != 0)
{
    printf("Nao divisivel por 3 e 5");
}












}