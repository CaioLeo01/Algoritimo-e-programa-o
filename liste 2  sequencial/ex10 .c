#include <stdio.h>
#include <math.h>

int main() {

char nome[9999], sobreNome[999];

double x1 , x2 , y1 , y2 , distancia , p1 , p2;


printf("saudacoes usuario,me diga,qual seu primeiro nome?\n");
scanf("%s", &nome);

printf("qual seu sobrenome %s?\n", nome);
scanf("%s", &sobreNome);

printf("%s %s,me diga qual valor quer atribuir a x1?\n", nome, sobreNome);
scanf("%lf",&x1);

printf("%s %s,me diga qual valor quer atribuir a x2?\n", nome, sobreNome);
scanf("%lf", &x2);

printf("%s %s,me diga qual valor quer atribuir a y1?\n", nome, sobreNome);
scanf("%lf", &y1);

printf("%s %s,me diga qual valor quer atribuir a y2?\n", nome, sobreNome);
scanf("%lf", &y2);

p1 = x2 - x1;
p2 = y2 - y1;

distancia = sqrt(pow(p1,2) + pow(p2,2));


printf("Distancia e = %.4lf", distancia);



}