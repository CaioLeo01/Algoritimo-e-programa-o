#include<stdio.h>

int main(){
     
     int dia;

     printf("digite o dia da semana de 1 a 7:");
     scanf("%d", &dia);

     switch(dia)
     {
         case 1: printf("domingo"); break;
         case 2: printf("segunda"); break;
         case 3: printf("terca"); break;
         case 4: printf("quarta"); break;
         case 5: printf("quinta"); break;
         case 6: printf("sexta"); break;
         case 7: printf("sabado"); break;
         default: printf("invalido");     
     }

}