#include <stdio.h>
#include <math.h>
#define PI 3.14159//Constante
int main(){
    //calcular a area do circulo->area - 3.14159 - raio²
float area, raio;
printf("Digite o valor do raio: ");
scanf("%f", &raio);
area = PI * pow(raio,2);//POW função matematica  da <math.h>
printf("area: %f", area);






}