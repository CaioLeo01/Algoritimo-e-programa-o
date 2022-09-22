#include<stdio.h>
int main(){
    float altura, resultadoHomi, resultadoMuie;
    char sexo;

printf("Digite o sexo:\n");
scanf("%c", &sexo);

printf("Digite a altura:\n");
scanf("%f", &altura);

if (sexo == 'm' || sexo == 'M')
{
resultadoHomi = (72.7 * altura) - 58;
printf("resultado: %.1f\n", resultadoHomi);
}
else
{
    resultadoMuie = (62.1 * altura) - 44.7;
printf("resultado: %.1f\n", resultadoMuie);
}
