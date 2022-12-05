#include <stdio.h>

int main()
{

float produto, imposto;
int estado;

printf("Digite o valor do produto:");
scanf("%f", &produto);

printf("escolha um estado (1)MG, (2)SP, (3)RJ, (4)MS: ");
scanf("%d", &estado);

switch (estado)
{
    case 1 : 
    {
        imposto = produto * 0.7;
        break;
    }

    case 2 :
    {
        imposto = produto * 0.12;
        break;
    }

    case 3 :
    {
        imposto = produto * 0.15;
        break;
    }
    case 4 : 
    {
        imposto = produto * 0.8;
         break;
    }
    default:
    {
        printf("erro 404!");
        break;
    }

}

printf("Imposto: %0.2f", produto + imposto);

}
