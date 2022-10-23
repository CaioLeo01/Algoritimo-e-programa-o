

#include <stdio.h>
#include<math.h>


int main(){

printf("Diciplina:Algoritimo de programacao\n");
printf("Professora:Joyce Siqueira\n");
printf("Aluno:Caio Manoel Costa Leonardo\n");
printf("Matricula:UC22200020\n");
printf("Curso:Ciencia da computacao\n");
printf("Link do GitHub:\n");
printf("Software:Vs code\n");

char questao, nome[90], nomeObra[90];
float a, b, catOposto, catAdjacente, hipotenusa;
int idade, situObra, mesInicio, mestermino, totalMes;

printf("Digite qual questao deseja ve:\n\a");
scanf("%c", &questao);

switch (questao)
{
   
    //questao 01
case 'a':

printf("Digite o valor de A do Cateto oposto:\n");
scanf("%f", &a);

printf("Digite o valor de b do Cateto Adjacente\n");
scanf("%f", &b);

catOposto = a * a;

printf("O valor do cateto oposto e:%.3f\n", catOposto);

catAdjacente = b * b;

printf("O valor do cateto adjacente e:%.3f\n", catAdjacente);

hipotenusa = sqrt(catOposto + catAdjacente);

printf("O valor da hipotenusa e:%.3f\n", hipotenusa);

break;

case 'A':


printf("Digite o valor de A do Cateto oposto:\n");
scanf("%f", &a);

printf("Digite o valor de b do Cateto Addjacente\n");
scanf("%f", &b);

catOposto = a * a;

printf("O valor do cateto oposto e:%.3f\n", catOposto);

catAdjacente = b * b;

printf("O valor do cateto addjacente e:%.3f\n", catAdjacente);

hipotenusa = sqrt(catOposto + catAdjacente);

printf("O valor do cateto oposto e:%.3f\n", hipotenusa);


break; 


//questao 02
case 'b':

printf("Digite o seu nome e sobrenome\n");
scanf("%s", &nome);
fflush(stdin);

printf("Digite a sua data de nascimento(so e valida de 1900 a 2022):\n");
scanf("%i", &idade);
fflush(stdin);

 if(idade <=1989 || idade >= 2023)

    printf("Ano de nascimento nao eh valido");

else if(idade % 4 == 0 && idade % 100 == 0 && idade % 400 == 0)
 
printf("%s,o ano %d eh bissexto!", nome, idade);
    
    else if(idade <=1989 || idade >= 2023)

    printf("Ano de nascimento nao eh valido");
    
    else if(idade % 4 != 0 && idade % 100 != 0 && idade % 400 != 0)
         printf("%s,voce nao nasceu em um ano bissexto :(", nome);
     

break;

case 'B':

printf("Digite o seu nome e sobrenome\n");
scanf("%s", &nome);
fflush(stdin);

printf("Digite a sua data de nascimento(so e valida de 1900 a 2022):\n");
scanf("%i", &idade);
fflush(stdin);

if(idade % 4 == 0 && idade % 100 == 0 && idade % 400 == 0)

printf("%s,o ano %d eh bissexto!", nome, idade);
    
    
    else if(idade % 4 != 0 && idade % 100 != 0 && idade % 400 != 0)
         printf("%s,voce nao nasceu em um ano bissexto :(", nome);
     
    
         




break;

case 'c':


printf("digite o nome da sua obra:\n");
scanf("%s", &nomeObra);

printf("digite qual a situacao da obra:\n");
scanf("%i", &situObra);

printf("Qual o mes de inicio:\n");
scanf("%i", &mesInicio, mestermino);

printf("Digite o mesde termino:\n");
scanf("%i", &mestermino);






printf("Nome da obra e:%s\n", nomeObra);

if (situObra == 1){
printf("Obra Concluida\n");}
   else if (situObra == 2){
        printf("Problemas no projeto\n");}
            else if(situObra == 3){
            printf("Atraso nos repasses financeiros\n");}
                else if (situObra == 4){
                    printf("Greve dos trabalhadores\n");}
                        else if (situObra == 5){
                            printf("Falta de materiais\n");}
                                else if (situObra == 6){
                                    printf("Falta de equipamentos\n");}
                                         else if (situObra >= 7){
                                            printf("Situacao da onbra invalida\n");}



totalMes = mestermino - mesInicio;

printf("Tempo de execucao:%d messes\n", totalMes);
 







break;


case 'C':


printf("digite o nome da sua obra:\n");
scanf("%s", &nomeObra);

printf("digite qual a situacao da obra:\n");
scanf("%i", &situObra);

printf("Qual o mes de inicio:\n");
scanf("%i", &mesInicio, mestermino);

printf("Digite o mesde termino:\n");
scanf("%i", &mestermino);






printf("Nome da obra e:%s\n", nomeObra);

 if (situObra == 1)
printf("Obra Concluida\n");
   else if (situObra == 2)
        printf("Problemas no projeto\n");
            else if(situObra == 3)
            printf("Atraso nos repasses financeiros\n");
                else if (situObra == 4)
                    printf("Greve dos trabalhadores\n");
                        else if (situObra == 5)
                            printf("Falta de materiais\n");
                                else if (situObra == 6)
                                    printf("Falta de equipamentos\n");
                                         else if (situObra >=7)
                                            printf("Situacao da onbra invalida\n");



totalMes = mestermino - mesInicio;

printf("Tempo de execucao:%d messes\n", totalMes);
 





break;





default:printf("E so a questao A B ou C jumento\n");break;
}





}




