#include <stdio.h>
#include <math.h>

int main() {

int repeticao = 0;
float  n1, n2, n3;

while (repeticao != 2)
{

printf("Digite um numero positivo\n");
scanf("%f", &n1);


if (n1 >= 0)
{
    n2 = pow(n1,3);
    n3 = sqrt(n1);
    printf("o numero: %.4f elvado ao quadrado fica: %f\n", n1, n2);
    printf("o numero: %.4f e a raiz eh: %f\n", n1, n3 );
}
else
{
    printf("o numero que voce digitou nao eh positivo!!!\n");
}


printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);



   
}






}