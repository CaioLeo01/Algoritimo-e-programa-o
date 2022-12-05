#include <stdio.h>

int main()
{

float x , y;

printf("Digite os valores x e y: ");
scanf("%f%f", &x, &y);

if(x >= 1 && y >= 1)
{
printf("X = %0.1f\n", x);
printf("Y = %0.1f\n", y);
printf("Quadrante 1");
}

else if(x <= -1 && y >= 1)
{
    printf("X = %0.1f\n", x);
    printf("Y = %0.1f\n", y);
    printf("Quadrante 2");
}

else if(x <= -1 && y <= -1)
{
    printf("X = %0.1f\n", x);
    printf("Y = %0.1f\n", y);
    printf("Quadrante 3");
}    

else if(x >= 1 && y <= -1)
{
    printf("X = %0.1f\n", x);
    printf("Y = %0.1f\n", y);
    printf("Quadrante 4");
}
else if (x == 0 && y == 0)
{
    printf("Origem!");
}
 
else if(x == 0)
{
    printf("Eixo X");
}

else if(y == 0)
{
    printf("Eixo Y");
}
}













