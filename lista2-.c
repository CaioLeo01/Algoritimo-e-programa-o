#include <stdio.h>
int main(){

int idade;
 printf("Digite sua idade:");
    scanf("%d", &idade);

 if (idade >=0 && idade <=4)
  printf("Tu ainda e um bb");
   else if (idade >=5 && idade <=7)
     printf("Infantil A");
      else if (idade >=8 && idade <=10)
        printf("Infantil B");
         else if (idade >=11 && idade <=13)
           printf("juvenil A");
             else if (idade >=14 && idade <=17)
              printf("juvenil B");
                else if (idade >=18)
                 printf("senior");
                  else if (idade <=-1 && idade >= -10000)
                   printf("Ta vivendo para tras e abestado");
      


}







