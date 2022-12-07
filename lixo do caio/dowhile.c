//testando o do while


#include <stdio.h>


int main(){


int validarInteiro; // validar de 1 a 10
float validarReal; // validar de 1 a 9,9
char validarCaracter; // Validar apenas a letra a & A


// imprima as variaveis


do{

printf("Vamos la! Digite um numero valido de 1 a 10! Nao inventa!:");
scanf("%d", &validarInteiro);
}while (validarInteiro < 1 || validarInteiro > 10);

do
{
printf("Passou de Fase!!! Agora digite um valor de 1 a 9,9:");
fflush(stdin);
scanf("%f", &validarReal);
} while (validarReal < 1 || validarReal >= 9.9);


do
{
printf("Inseto voce so tem duas opcoes digitar a ou A:\n");
fflush(stdin);
scanf("%c", &validarCaracter);
fflush(stdin);
} while (validarCaracter != 'a' && validarCaracter != 'A');

printf("Vamos as variaveis !!!! \n");
printf("ValidarInteiro: %d \n", validarInteiro);
printf("ValidarReal: %f \n", validarReal);
printf("ValidarCaracter: %c \n", validarCaracter);






}