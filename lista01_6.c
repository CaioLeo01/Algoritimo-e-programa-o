#include<stdio.h>

        int main(){
            float notaA,notaB,notaFinal;
            printf("DIGITE A VALOR DA NOTA A e B respectivamente:");
                scanf("%f%f", &notaA, &notaB); 
                     notaFinal= (notaA*3.5 + notaB*7.5)/11;
                         printf(" A nota final do aluno e %f", notaFinal); 



            return 0;
        }