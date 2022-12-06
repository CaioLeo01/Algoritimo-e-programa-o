#include<stdio.h>
int main(){

	int n = -1;
	float s = 0, i;
	
    for (i = 1.0; i <= 55.0; i++){
    	n += 2;
    	s += (n / i);
	    }
	printf("%f", s);	
}