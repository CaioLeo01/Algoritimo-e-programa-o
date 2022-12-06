#include<stdio.h>

int main () {
    int num = 1, multi = 0;

    for (num; multi < 5; num++) {
        if (num % 3 == 0) {
            multi++;
            printf("Numero: %d \n", num);
        }
    }
}