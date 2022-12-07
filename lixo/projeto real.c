/*
PROJETO FINAL FEITO POR:
    ALUNO:                                     MATRÍCULA:                                  CURSO:
        CAIO MANOEL COSTA LEONARDO                  UC22200020                                  CIÊNCIA DA COMPUTAÇÃO
        LUCAS ALVES SAMPAIO                         UC22103084                                  CIÊNCIA DA COMPUTAÇÃO
        THIAGO  YURI SOUSA DIAS ALVES               UC22200046                                  CIÊNCIA DA COMPUTAÇÃO
*/

#include <stdio.h>

int main(){

    int homensTotal, mulheresTotal, sessao, pessoas1,contadorPessoas1, idade1, inteira1, meia1, arrecadacaoTotal1, valorMeia1, valorInteira1;
    int  homens1 = 0, mulheres1 = 0, contadorIdade1 = 0, feminino1 = 0, masculino1 = 0, criancas1 = 0, adolescentes1 = 0, adultos1 = 0, idosos1 = 0, erro1 = 0;
    char sexo1;

    int pessoas2,contadorPessoas2, idade2, inteira2, meia2, arrecadacaoTotal2, valorMeia2, valorInteira2;
    int homens2 = 0, mulheres2 = 0, contadorIdade2 = 0, feminino2 = 0, masculino2 = 0, criancas2 = 0, adolescentes2 = 0, adultos2 = 0, idosos2 = 0, erro2 = 0;
    char sexo2;

    printf("PROJETO FINAL por:\n");
    printf(" Caio Manoel -\t UC22200020 -\t Ciencia da Computacao\n Lucas Alves -\t UC22103084 -\t Ciencia da Computacao\n Thiago Yuri -\t UC22200046 -\t Ciencia da Computacao\n\a");
    printf("_________________________________\n");
    printf("CINEMA DOS CRIA\n");


    printf("Informe a quantidade de sessoes:");
    scanf("%d", &sessao);

    while (sessao!=2){

        printf("Somente duas sessoes sao aceitas\nInforme novamente:");
        scanf("%d", &sessao);

    }

    printf("SESSAO 1 -NOTURNO\nQuantas pessoas assistiram:");
    scanf("%d", &pessoas1);
    fflush(stdin);
    
    while (pessoas1<=9){

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas1);
        fflush(stdin);

    }
        
    for (contadorPessoas1 = 1; contadorPessoas1 <= pessoas1; contadorPessoas1++){

        printf("Se identifica como Masculino(M) ou Feminino(F) e Idade\nExemplo: Macho de 89 anos = M89\n");
        scanf("%c%d", &sexo1, &idade1);
        fflush(stdin);

        switch (sexo1){

            case 'f': feminino1++; break;
            case 'F': feminino1++; break;
            case 'm': masculino1++; break;
            case 'M': masculino1++; break;
            default: printf("Sexo Invalido\n"); erro1++; break;

        }
           
      
        if(idade1 < 3 || idade1 > 100){
        printf("Idade Invalida\n");erro1++; 
       
            }
        else if (idade1 >= 3 && idade1 <= 13){
                criancas1++;
            }
        else if (idade1 >= 14 && idade1 <= 17){
                adolescentes1++;
            }
        else if ( idade1 >= 18 && idade1 <= 64){
                adultos1++;

                if(sexo1 == 'm' || sexo1 == 'M'){
                    homens1++;
                }
                else if (sexo1 == 'f' || sexo1 == 'F'){
                    mulheres1++;
                }
            }
        else if (idade1 >= 65 && idade1 <= 100){
                idosos1++;

                if(sexo1 == 'm' || sexo1 == 'M'){
                    homens1++;
                }
                else if (sexo1 == 'f' || sexo1 == 'F'){
                    mulheres1++;
                }
            }

        if (erro1 != 0)
        {

            contadorPessoas1 = 0;
            feminino1 = 0;
            masculino1 = 0;
            criancas1 = 0;
            adolescentes1 = 0;
            adultos1 = 0;
            idosos1 = 0;
            printf("Reinicie a coleta de dados da sessao\n");

        }
        
        erro1 = 0;

         

        
            
        


    }

    meia1 = (criancas1 + adolescentes1);
    inteira1 = (adultos1 + idosos1);
    valorMeia1 = meia1 * 25;
    valorInteira1 = inteira1 * 50;
    arrecadacaoTotal1 = valorInteira1 + valorMeia1;



    printf("_________________________________\n\n\n");
    printf("SESSAO 1: Bob Esponja\n");
    printf("\t\t\t\t\t\t    |---------|\n");
    printf("\t\t\t\t\t\t    |  O   O  |\n");
    printf("\t\t\t\t\t\t|---|   ___   |---|\n");
    printf("\t\t\t\t\t\t|   |  |_U_|  |   |\n");
    printf("\t\t\t\t\t\t    |_________|\n");
    printf("\t\t\t\t\t\t    |__|___|__|\n");
    printf("\t\t\t\t\t\t       |   |  \n");
    printf("\t\t\t\t\t\t     __|   |__\n");
    printf("\n\tInteira - R$50,00\n\tMeia - R$25,00\n");
    printf("Homens que assistiram:%d\nMulheres que assistiram:%d\n", masculino1, feminino1);
    printf("Publico por Faixa Etaria:\n Criancas:%d\n Adolescentes:%d\n Adultos:%d\n Idosos:%d\n", criancas1, adolescentes1, adultos1, idosos1);
    
     if (inteira1 > meia1) {
        printf("Valor Arrecadado:%d\nForam vendidas mais Inteiras (%d) do que Meias (%d)\n\n\n", arrecadacaoTotal1, inteira1, meia1);
        }
        else if (inteira1 < meia1){
        printf("Valor Arrecadado:%d\nForam vendidas mais Meias (%d) do que Inteiras (%d)\n\n\n", arrecadacaoTotal1, meia1, inteira1);
        }
        else printf("Inteiras e Meias foram igualemente vendidas\n\n\n");
    printf("_________________________________\n");




printf("SESSAO 2 -VESPERTINO\nQuantas pessoas assistiram:");
    scanf("%d", &pessoas2);
    fflush(stdin);
    
    while (pessoas2<=9){

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas2);
        fflush(stdin);

    }
        
    for (contadorPessoas2 = 1; contadorPessoas2 <= pessoas2; contadorPessoas2++){

        printf("Se identifica como Masculino(M) ou Feminino(F) e Idade\nExemplo: Macho de 89 anos = M89\n");
        scanf("%c%d", &sexo2, &idade2);
        fflush(stdin);

        switch (sexo2){

            case 'f': feminino2++; break;
            case 'F': feminino2++; break;
            case 'm': masculino2++; break;
            case 'M': masculino2++; break;
            default: printf("Sexo Invalido\n"); erro2++; break;

        }
           
      
        if(idade2 < 3 || idade2 > 100){
        printf("Idade Invalida\n");erro2++; 
       
            }
        else if (idade2 >= 3 && idade2 <= 13){
                criancas2++;
            }
        else if (idade2 >= 14 && idade2 <= 17){
                adolescentes2++;
            }
        else if ( idade2 >= 18 && idade2 <= 64){
                adultos2++;

                if(sexo2 == 'm' || sexo2 == 'M'){
                    homens2++;
                }
                else if (sexo2 == 'f' || sexo2 == 'F'){
                    mulheres2++;
                }
    
            }
        else if (idade2 >= 65 && idade2 <= 100){
                idosos2++;

                if(sexo2 == 'm' || sexo2 == 'M'){
                    homens2++;
                }
                else if (sexo2 == 'f' || sexo2 == 'F'){
                    mulheres2++;
                }

            }

        if (erro2 != 0)
        {

            contadorPessoas2 = 0;
            feminino2 = 0;
            masculino2 = 0;
            criancas2 = 0;
            adolescentes2 = 0;
            adultos2 = 0;
            idosos2 = 0;
            printf("Reinicie a coleta de dados da sessao\n");

        }
        
        erro2 = 0;

    }

    meia2 = (criancas2 + adolescentes2);
    inteira2 = (adultos2 + idosos2);
    valorMeia2 = meia2 * 25;
    valorInteira2 = inteira2 * 50;
    arrecadacaoTotal2 = valorInteira2 + valorMeia2;



    printf("_________________________________\n\n\n");
    printf("SESSAO 2: Joyce Aprova a Turma\n\tInteira - R$50,00\n\tMeia - R$25,00\n");
    printf("Homens que assistiram:%d\nMulheres que assistiram:%d\n", masculino2, feminino2);
    printf("Publico por Faixa Etaria:\n Criancas:%d\n Adolescentes:%d\n Adultos:%d\n Idosos:%d\n", criancas2, adolescentes2, adultos2, idosos2);
    
     if (inteira2 > meia2) {
        printf("Valor Arrecadado:%d\nForam vendidas mais Inteiras (%d) do que Meias (%d)\n\n\n", arrecadacaoTotal2, inteira2, meia2);
        }
        else if (inteira2 < meia2){
        printf("Valor Arrecadado:%d\nForam vendidas mais Meias (%d) do que Inteiras (%d)\n\n\n", arrecadacaoTotal2, meia2, inteira2);
        }
        else printf("Inteiras e Meias foram igualemente vendidas\n\n\n");
    printf("_________________________________\n");

    homensTotal = homens1 + homens2;
    mulheresTotal = mulheres1 + mulheres2;

    printf("Homens adultos presentes nas duas sessoes: %d\n", homensTotal);
    printf("Mulheres adultas presentes nas duas sessoes: %d\n", mulheresTotal);

    
     if (pessoas1 > pessoas2) {
        printf("sessao noturna(1) teve mais pessoas com: %d\nDo que a sessao vespertina(2) com: %d\n\n\n", pessoas1, pessoas2);
        }
        else if (pessoas1 < pessoas2){
        printf("sessao vespertina teve mais pessoas com: %d\nDo que a sessao noturna com: %d\n\n\n", pessoas2 , pessoas1);
        }
        else printf("A sessoes noturna e vespertina teve a mesma quantidade de publico\n\n\n");
    printf("_________________________________\n");


}