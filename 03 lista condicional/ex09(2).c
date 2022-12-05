#include <stdio.h>
#include <math.h>

int main() {

int repeticao = 0;

float altura, peso;

while (repeticao != 2)
{

printf("Me diga,qual sua altura\n");
scanf("%f", &altura);

printf("Me diga,qual seu peso\n");
scanf("%f", &peso);

if (peso <= 60)
{

    if (altura < 1.20)
    
        printf("A\n");
    
    else if (altura >= 1.20 && altura <= 1.70)
    
        printf("B\n");
    
    else if (altura > 1.70)
    
        printf("C\n");

}

if (peso >= 60 && peso <= 90 )
{
    if (altura < 1.20)
    
        printf("D\n");
    
    else if (altura >= 1.20 && altura <= 1.70)
    
        printf("E\n");
    
    else if (altura > 1.70)
    
        printf("F\n");

}

if (peso > 90)
{
    if (altura < 1.20)
    
        printf("G\n");
    
    else if (altura >= 1.20 && altura <= 1.70)
    
        printf("H\n");
    
    else if (altura > 1.70)
    
        printf("I\n");

}

   





printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);



   
}



}
