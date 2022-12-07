#include <stdio.h>

int main()
{

float produto, imposto, produtoFinal, total;
int estado;

printf("Digite o valor do produto:");
scanf("%f", &produto);

printf("escolha um estado (1)MG, (2)SP, (3)RJ, (4)MS: ");
scanf("%d", &estado);

switch (estado)
{
    case 1 : 
    {
        produtoFinal = produto * 0.7;
        total = produtoFinal + produto;
        printf("O valor do produto final mais impostos sera de %f", total);
        break;
    }

    case 2 :
    {
    	produtoFinal = produto * 0.12;
        total = produtoFinal + produto;
        printf("O valor do produto final mais impostos sera de %f", total);
        
        break;
    }

    case 3 :
    {
        produtoFinal = produto * 0.15;
        total = produtoFinal + produto;
        printf("O valor do produto final mais impostos sera de %f", total);
        break;
    }
    case 4 : 
    {
        produtoFinal = produto * 0.8;
        total = produtoFinal + produto;
        printf("O valor do produto final mais impostos sera de %f", total);
        
         break;
    }
    default:
    {
        printf("ERRO ESTADO DIGITADO NAO ENCONTRADO");
        break;
    }

}




}