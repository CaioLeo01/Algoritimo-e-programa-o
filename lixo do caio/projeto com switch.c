/*PROJETO FINAL FEITO POR:
ALUNO:                                     MATRÍCULA:                                  CURSO:
    CAIO MANOEL COSTA LEONARDO                  UC22200020                                  CIÊNCIA DA COMPUTAÇÃO
    LUCAS ALVES SAMPAIO                         UC22103084                                  CIÊNCIA DA COMPUTAÇÃO
    THIAGO  YURI SOUSA DIAS ALVES               UC22200046                                  CIÊNCIA DA COMPUTAÇÃO
*/

#include <stdio.h>

int main(){

    int sessao, pessoas,contadorPessoas, feminino = 0, masculino = 0;
    char sexo;

    printf("PROJETO FINAL por:\n");
    printf(" Caio Manoel -\t UC22200020 -\t Ciencia da Computacao\n Lucas Alves -\t UC22103084 -\t Ciencia da Computacao\n Thiago Yuri -\t UC22200046 -\t Ciencia da Computacao\n\a");



    printf("Informe a quantidade de sessoes:");
    scanf("%d", &sessao);

     while (sessao == 1 || sessao == 2){

        printf("Somente duas sessoes sao aceitas\nInforme novamente:");
        scanf("%d", &sessao);

    }

switch (sessao)
{
case 1 :
 

    printf("Quantas pessoas assistiram?");
    scanf("%d", &pessoas);
    fflush(stdin);

    while (pessoas<=9){

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas);
        fflush(stdin);

    }
        
    for (contadorPessoas = 1; contadorPessoas <= pessoas; contadorPessoas++){

        printf("Se identifica Masculino(M) ou Feminino(F):\n");
        scanf("%c", &sexo);
        fflush(stdin);

        switch (sexo){

            case 'f': feminino++; break;
            case 'F': feminino++; break;
            case 'm': masculino++; break;
            case 'M': masculino++; break;
            default: printf("Valido apenas M ou F"); contadorPessoas--; break;

        }

    }

    printf("Masculino: %d\nFeminino: %d", masculino, feminino);

     break;

case 2 :

   
    printf("Quantas pessoas assistiram?");
    scanf("%d", &pessoas);
    fflush(stdin);

    while (pessoas<=9){

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas);
        fflush(stdin);

    }
        
    for (contadorPessoas = 1; contadorPessoas <= pessoas; contadorPessoas++){

        printf("Se identifica Masculino(M) ou Feminino(F):\n");
        scanf("%c", &sexo);
        fflush(stdin);

        switch (sexo){

            case 'f': feminino++; break;
            case 'F': feminino++; break;
            case 'm': masculino++; break;
            case 'M': masculino++; break;
            default: printf("Valido apenas M ou F"); contadorPessoas--; break;

        }

    }

    printf("Masculino: %d\nFeminino: %d", masculino, feminino);

    break;

default:printf("Erro");
    break;
}


}