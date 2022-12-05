#include <stdio.h>

int main() {

int repeticao = 0;

float salario, emprestimo, verificasao;

while (repeticao != 2)
{

printf("ola trabalhador,me diga qual o valor do seu salario\n");
scanf("%f", &salario);

printf("certo!!\nagora me diga qual o valor do emprestimo voce quer pegar\n");
scanf("%f", &emprestimo);

verificasao = salario * 0.2;

if (verificasao >= emprestimo )
{
    printf("Emprestimo concedido.\n");
}
else
{
    printf("Emprestimo nao concedido.\n");
}

printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
scanf("%i", &repeticao);



   
}









}