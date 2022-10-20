#include <stdio.h>

int main ()
{

int inteiro;
float decimal;
char letra [10];


printf("Digite o um numero inteiro:\n");
scanf("%i", inteiro);

{
    printf("Digite o um numero decimal:\n");
    scanf("%f", decimal);
    fflush(stdin);
}
{
        printf("Digite uma letra:\n");
        scanf("%c", letra);
        fflush(stdin);
}
{
            printf("%i\n", inteiro);
            printf("%9.2f\n", decimal);
            printf("%c\n", letra);
}

return 0;

}