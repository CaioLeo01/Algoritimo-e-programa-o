#include <stdio.h>
#include <stdlib.h>

int main() {
	int n; 
	int sequencia = 1, sequenciaA = 0, sequenciaAux;
	
	printf("Quantos termos da sequencia de Fibonacci deseja ver? \n ");
	scanf("%d", &n);
	
	printf("\n 0 ");
	n--;
	
	while (n) {
		printf("%d ", sequencia);
		sequenciaAux = sequencia;
		sequencia += sequenciaA;
		sequenciaA = sequenciaAux;
		n--;
	}	  
	
	printf("\n\n");
	
	return 0;
}