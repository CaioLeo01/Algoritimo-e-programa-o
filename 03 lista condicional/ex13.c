#include <stdio.h>
#include <math.h>

int main()
{

int equacao;
float x, y, z, resultado;

printf("Digite tres valores : ");
scanf("%f%f%f", &x, &y, &z);

printf("Digite a operacao desejada (1)Geometrica, (2)Ponderada, (3)Harmonica, (4)Aritimetica: ");
scanf("%d", &equacao);


switch (equacao)
{
case (1):
{
    resultado = x * y * z;
    break;
}

case (2) :
{
    resultado = x + (2 * y) + (3 * z) / 6;
    break;
}

case (3) :
{
    resultado = 1 / (1 / x + 1 / y + 1 / z);
    break;
}

case (4) : 
{
    resultado = (x + y + z)  / 3;
    break;
}

default : 
{
    printf("invalido!\n");
}


}

printf("Resultado: %0.1f", resultado);
}