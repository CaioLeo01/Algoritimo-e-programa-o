/*PROJETO FINAL FEITO POR:
ALUNO:                                     MATRÍCULA:                                  CURSO:
    CAIO MANOEL COSTA LEONARDO                  UC22200020                                  CIÊNCIA DA COMPUTAÇÃO
    LUCAS ALVES SAMPAIO                         UC22103084                                  CIÊNCIA DA COMPUTAÇÃO
    THIAGO  YURI SOUSA DIAS ALVES               UC22200046                                  CIÊNCIA DA COMPUTAÇÃO
*/

#include <stdio.h>

int main(){

    int sessao, pessoas,contadorPessoas, feminino = 0, masculino = 0, idade, criancas = 0, adolescentes = 0, adultos = 0, idosos = 0;
    int contadorIdade = 0 ;
    char sexo;
    int contadorSexo = 0 ;

    printf("PROJETO FINAL por:\n");
    printf(" Caio Manoel - UC22200020 - Ciencia da Computacao\n Lucas Alves - UC22103084 - Ciencia da Computacao\n Thiago Yuri - UC22200046 - Ciencia da Computacao\n");
    printf("___________________________________\n");


    printf("Informe a quantidade de sessoes:");
    scanf("%d", &sessao);

    while (sessao!=2){

        printf("Somente duas sessoes sao aceitas\nInforme novamente:");
        scanf("%d", &sessao);

    }

    printf("Quantas pessoas assistiram?");
    scanf("%d", &pessoas);
    fflush(stdin);
    
    while (pessoas<=9){

        printf("Minimo por sessao = 10\nInforme novamente:");
        scanf("%d", &pessoas);
        fflush(stdin);

    }
        
    for (contadorPessoas = 1; contadorPessoas <= pessoas; contadorPessoas++){

        while (contadorSexo != 1 ){
    
        printf("Se identifica,Masculino(M) ou Feminino(F)\n");
        scanf("%c", &sexo);
        fflush(stdin);

        switch (sexo){

            case 'f': feminino++;contadorSexo++; break;
            case 'F': feminino++;contadorSexo++; break;
            case 'm': masculino++;contadorSexo++;break;
            case 'M': masculino++;contadorSexo++; break;
            default: printf("Valido apenas M ou F\n"); contadorPessoas--;contadorSexo--; contadorSexo = 0;break;

             contadorSexo = 0;
        printf("%i\n", contadorSexo);
        }
        }


           contadorSexo = 0;
        printf("%i", contadorSexo);

          while (contadorIdade != 1)
          {

           printf("Digite a Idade (3 a 100):\n");
        scanf("%d", &idade);
        fflush(stdin);


         if (idade >= 3 && idade <= 13){
                criancas++;contadorIdade++;
            }
        else if (idade >= 14 && idade <= 17){
                adolescentes++;contadorIdade++;
            }
        else if ( idade >= 18 && idade <= 64){
                adultos++;contadorIdade++;
            }
        else if (idade >= 65 && idade <= 100){
                idosos++;contadorIdade++;
        }

        else if (idade <= 3 || idade >= 100){
                 printf("Idade Invalida\n"); 
                contadorIdade--;contadorIdade = 0;

        contadorIdade = 0;
        printf("%i\n", contadorIdade);
            }
            }

    contadorIdade = 0;
    printf("%i\n", contadorIdade);
    }

    printf("Masculino: %d\nFeminino: %d\n", masculino, feminino);
    printf("Criancas: %d Adolecentes: %d Adultos: %d Idosos: %d", criancas, adolescentes, adultos, idosos);

}