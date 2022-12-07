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
    int escolha = 0;
    char sexo;
    int erro = 0;

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
        
    while (escolha != 2)
    {
        

    for (contadorPessoas = 1; contadorPessoas <= pessoas; contadorPessoas++){

        printf("Se identifica,Masculino(M) ou Feminino(F) e Idade\n");
        scanf("%c%d", &sexo, &idade);
        fflush(stdin);

        switch (sexo){

            case 'f': feminino++; break;
            case 'F': feminino++; break;
            case 'm': masculino++; break;
            case 'M': masculino++; break;
            default: printf("Valido apenas M ou F\n"); contadorPessoas--;erro++;break;


        }
           
      
    

        if(idade <= 3 || idade >= 100){
        printf("Idade Invalida\n");erro++; 
       
            }
        else if (idade >= 3 && idade <= 13){
                criancas++;
            }
        else if (idade >= 14 && idade <= 17){
                adolescentes++;
            }
        else if ( idade >= 18 && idade <= 64){
                adultos++;
            }
        else if (idade >= 65 && idade <= 100){
                idosos++;
            }

        printf("Se quer refazer o teste digite 1,caso contrario digite 2\n");
        scanf("%i", &escolha);
        fflush(stdin);






            }

    }

    printf("Masculino: %d\nFeminino: %d\n", masculino, feminino);
    printf("Criancas: %d Adolecentes: %d Adultos: %d Idosos: %d", criancas, adolescentes, adultos, idosos);

}