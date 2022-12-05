#include <math.h>
#include <stdio.h> //biblioteca- printf scanf
//(inteiro-%d) float



int main(){

float n1, n2, resultado;
char operador;

printf("Digite dois valores: ");
scanf("%f%f", &n1, &n2);
fflush(stdin);

printf("Digite a operador desejada: ");
scanf("%c", &operador);



  switch (operador)
{
        case  '+':  
            resultado = n1 + n2 ; 
            printf("Soma: %1.f", resultado);
             break;
        case  '-':  
            resultado = n1 - n2 ; 
            printf("Subtracao: %1.f", resultado);
            break;
        case   '*':  
            resultado = n1 * n2 ; 
            printf("multiplicacao: %1.f", resultado);
            break;
        case '/':  
            resultado = n1 / n2 ; 
            printf("divisao: %1.f", resultado);
            break;
        case  's':  
            resultado = sqrt(n1); 
            printf("raiz: %1.f", resultado);
            break;
        case 'p':  
            resultado = pow(n1,n2); 
            printf("potencia: %1.f", resultado);
            break;       
        default: printf("Operador invalido"); break;
}



}