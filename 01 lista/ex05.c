#include<stdio.h>


    int main() { 
          float rolos, fios, TotalMetros, TotaldeRolos;
             printf("digite a quantidade de fio em metros que precisa: ");
                scanf("%f",&fios);
                    TotaldeRolos = (fios / 50);
                    TotalMetros = (TotaldeRolos * 50);
            printf("Total de metros avulsos : %.2f \n" ,TotalMetros);
            printf("Total de rolos necessarios : %.2f \n" ,TotaldeRolos);
    }