#include <stdio.h>
#include <math.h>

int main(void){

int n1, n2, n3, n4, n5 = 0;

float d1 = 0, d2 = 0, d3 = 0, d4 = 0;
 

    printf("descubra oque faco\n");
    printf("digite um numero,com ele vou fazer varias operacoes.OBS: o resultado tem que ser igual a 9\n");
do
{
    
    printf("Digite o primeiro numero(pode ser decimal ou inteiro)\n");
    scanf("%f", &d1);
    fflush(stdin);
    printf("Digite o segundo numero(pode ser decimal ou inteiro)\n");
    scanf("%f", &d2);
    fflush(stdin);

    d3 = d2 + d1;
    d4 = pow(d3,2);
    

    printf("o resultado proposto por voce foi: %.2f\n", d4);
    n5++;
} while ( d4 != 9);

if (n5 <= 1)
{
    printf("Parabens,ou tem muita sorte ou e sabido de matematica\n", n5);
}
else if(n5 >= 2)
{
printf("Depois de %i tentativas em guerreiro(a)\nParabens\n", n5);
}

printf("digite um numero de 1 a 3 para ouvir uma frase motivacional\n");
fflush(stdin);
scanf("%i\n", &n1);
fflush(stdin);
switch (n1)
{
case 1: printf("seu dia vai melhorar");break;
case 2: printf("amanha e um novo dia,anime-se");break;
case 3: printf("se esta dificil,e porque esta no caminho certo");break;
default: printf("Infelismente nao tem frase motivacional para quem nao segue o enunciado");break;
}



return 0;


}