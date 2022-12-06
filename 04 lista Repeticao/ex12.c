#include<stdio.h>

int main() {
    for (int i = 0; i <= 1000; i++){
        if (i % 3 == 0){
            printf("Multiplo de 3: %d \n", i);
            }
        else if (i % 5 == 0){
            printf("Multiplo de 5: %d \n", i);
            }   
    }
    return 0;
}