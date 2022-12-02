#include <stdio.h>

int main() {



char nome[9999], sobreNome[999];
double salario, TotalDeVendas, comissao, Total;


printf("saudacoes usuario,me diga,qual seu primeiro nome?\n");
scanf("%s", &nome);

printf("qual seu sobrenome %s?\n", nome);
scanf("%s", &sobreNome);

printf("qual seu salario fixo %s %s?\n", nome, sobreNome);
scanf("%lf", &salario);

printf("Certo %s,agora me diga,qual total de vendas efetuado por voce(em dinheiro)\n", nome);
scanf("%lf", &TotalDeVendas);

comissao = 0.15 * TotalDeVendas;
Total = comissao + salario;

printf("%s %s,o seu salario total + a comissao e = %.2lf\n", nome, sobreNome, Total);

if (Total >= 1000)
{
    printf("\aopaaaa,ja pode fazer um churras com uma cerva geladinha,so me falar qual dia ;)\n");
}
else
{
    printf("vishhhhh,o churras com cerva gelada fica para a proxima\n");
}

 return 0;
}