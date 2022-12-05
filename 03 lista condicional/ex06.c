#include <stdio.h>

int main()
{

    char letra, m, f;
    float pesoIdeal, altura;


    printf("ola, preciso que voce digite seu sexo m para masculino e f para feminino \n");
    scanf("%c", &letra);

    printf("digite a sua altura \n");
    scanf("%f", &altura );


    if( letra == m)
    {
        pesoIdeal = (72.7 * altura) - 58;

        printf("Seu peso ideal e %f \n", pesoIdeal);
    }

    else 
    {
        pesoIdeal = (62.1 * altura) - 44.7;

        printf("Seu peso ideal e %f \n", pesoIdeal);
    }


}