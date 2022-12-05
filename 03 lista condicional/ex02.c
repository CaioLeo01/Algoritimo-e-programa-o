#include <stdio.h>

int main() {

float n1, n2;


printf("Digite o primeiro numero\n");
scanf("%f", &n1);

printf("Digite o segundo numero\n");
scanf("%f", &n2);

if (n1 > n2)
{
    printf("o primeiro numero (%.2f) eh maior que o segundo numero(%.2f)\n", n1, n2);
}
if (n1 == n2)
{
    printf("Os dois numeros sao iguais\n");
}

else
{
    printf("o segundo numero (%.2f) eh maior que o primeiro numero(%.2f)\n", n2, n1);
}










}