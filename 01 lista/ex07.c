#include <stdio.h>

int main() {

float numeroDeMatricula, horasTrabalhadas, salarioPorHora, salario1, salario2, salario3;
char nome[9999], sobreNome[999], sexo;

printf("saudacoes usuario,me diga,qual seu primeiro nome?\n");
scanf("%s", &nome);
fflush(stdin);

printf("qual seu sobrenome %s?\n", nome);
scanf("%s", &sobreNome);
fflush(stdin);


printf("qual seu sexo,(Digite f para feminino e m para masculino)%s?\n", nome);
scanf("%c", &sexo);
fflush(stdin);

printf("qual seu numero de matricula,%s?\n", nome);
scanf("%f", &numeroDeMatricula);
fflush(stdin);

if (sexo == 'f')
{
    printf("Quantas horas trabalhada por voce doutora %s?\n", nome);
    scanf("%f", &horasTrabalhadas);
}
if (sexo == 'm')
{
    printf("Quantas horas trabalhada por voce doutor %s?\n", nome);
    scanf("%f", &horasTrabalhadas);
}
if (sexo == 'F')
{
    printf("Quantas horas trabalhada por voce doutora %s?\n", nome);
    scanf("%f", &horasTrabalhadas);
}
if (sexo == 'M')
{
    printf("Quantas horas trabalhada por voce doutor %s?\n", nome);
    scanf("%f", &horasTrabalhadas);
}


    printf("Quanto recebe por hora?\n");
    scanf("%f", &salarioPorHora);

salario1 = horasTrabalhadas * 5;
salario2 = salario1 * 3;
salario3 = salarioPorHora * salario2;


if (sexo == 'f')
{
    printf("se a Dr trabalhar %.0f horas durante 5 dias que corresponde a 1 semana,o seu salario  vai ser: %.2f\n", horasTrabalhadas, salario3);    
}
if (sexo == 'm')
{
   printf("se o Dr trabalhar %.0f horas durante 5 dias que corresponde a 1 semana,o seu salario  vai ser: %.2f\n", horasTrabalhadas, salario3);    
}
if (sexo == 'F')
{
    printf("se a Dr trabalhar %.0f horas durante 5 dias que corresponde a 1 semana,o seu salario  vai ser: %.2f\n", horasTrabalhadas, salario3);    
}
if (sexo == 'M')
{
   printf("se o Dr trabalhar %.0f horas durante 5 dias que corresponde a 1 semana,o seu salario  vai ser: %.2f\n", horasTrabalhadas, salario3);    
}





}
 