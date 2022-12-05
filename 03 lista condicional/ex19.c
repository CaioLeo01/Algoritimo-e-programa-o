#include <stdio.h>

int main(){
    
    float n1, n2, n3, n4, media, exame, nota_final;
    
    printf("Digite as 4 notas de um aluno: \n");
    scanf("%f%f%f%f", &n1, &n2, &n3, &n4);
    
    media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    
    printf("Media: %.1f \n", media);
    
    if (media >= 7.0)
    {
        printf("Aluno aprovado!");
    }

    else if(media >= 5.0 && media <= 6.9)
    {
        printf("Aluno em exame \n");
    }

    printf("Nota de exame: \n");
    scanf("%f", &exame);

    nota_final = media + exame / 2;

    if (nota_final >= 5.0)
    {
        printf("Aluno Aprovado! \n");
        printf("Media %.1f", nota_final);
    }

    else 
    {
        printf("Aluno Reprovado! \n");
        printf("Media: %.1f", nota_final);
    }

}
