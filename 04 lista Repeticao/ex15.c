#include<stdio.h>
int main(){
    
	int n, i;
	double Hn = 0;
	
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
		Hn = Hn + 1.0/i;
	
	printf("Hn: %lf \n", Hn);
		
}