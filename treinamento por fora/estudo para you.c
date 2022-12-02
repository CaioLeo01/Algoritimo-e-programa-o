#include <stdio.h>



int main(){

int n1, n2, n3, n4, n5 = 0;
int contador;

    

 for (contador = 1; contador <= 5; contador++)
{
        printf("Comtagem %i\n", contador);
        scanf("%i", &n1);
        fflush(stdin);

        n3 = ( n1 + n1);

 }

 printf("a somatoria dos numeros que digitou e igual a: %i\n", n3);
  

while (n2 != 3)
{
   printf("Adivinhe o numero\n");
 scanf("%i", &n2);

}

do
{
    printf("Digite um numero\n");
    scanf("%i", &n4);
    fflush(stdin);
if (n4 != 5)
{
    printf("burro %i\n", n4);
}

 else if (n4 == 5)
{
    printf("inteligente\n");
    printf("tabem,na %i tentativa ne,tinha que ir\n", n5);
}
n5++;

} while (n4 != 5);













}




























