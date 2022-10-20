#include <stdio.h>


int main()
{
 int long n1 = 0;

 float decimal = 0.0;

 float decimal2 = 0.0;

char texto = "";

 char texto2[1000] = "";
 
 printf("Digite um numero inteiro:\n\a");

 scanf("%i", &n1);
 printf("%i+2\n", n1);
 printf("valor total = %i\n\a", n1 + 2);


 printf("Digite um valor decimal \n\a");
 scanf("%f", &decimal); 
 printf("valor decimal dividido por 2: %.5f\n\a", decimal  /2);
 

 printf("Digite um valor decimal negativo:\n\a");
 scanf("%f", &decimal2); 
 printf("valor decimal  total depois da somatoria: %.4f\n\a", decimal2 - 23);
 fflush(stdin);

 printf("Digite uma vogal e descubra a charada:\n");
 scanf("%c", &texto);
 fflush(stdin);
   printf("a letra: %cbelha\n\a", texto );  //a
      printf("a letra: bol%c\n\a", texto );    //b
         printf("a letra: c%csa\n\a", texto );    //c
            printf("a letra: d%cdo\n\a", texto );    //d
               printf("a letra: escol%c\n\a", texto );  //e
                  printf("a letra: f%cca\n\a", texto );    //f
                       printf("a letra: g%cto\n\a", texto );    //g
                           printf("a letra: hond%c\n\a", texto );   //h
                              printf("a letra: igrej%c\n\a", texto );  //i  
                                 fflush(stdin);
  
  printf("Digite um texto de  no max 1000 caracter:\n");
  scanf("%s", &texto2);
  printf("%s <-- foi imprimido", texto2);


    }