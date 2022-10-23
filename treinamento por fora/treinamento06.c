


/*fazer o alfabeto em mais de uma língua e apresentar os dados de quantas letras têm e uma palavra para cada letra*/


#include <stdio.h>

int main(){

char alfabeto;
printf("Qual lingua quê o alfabeto?\n");
printf ("What language what the alphabet\n");
printf("para português digite a letra 'P'\n");
printf("Para inglês digite a letra 'i'\n");
printf("for Portuguese type the letter 'p'\nFor English type the letter 'i'\n");

 


printf("uma letra do alfabeto e recebera uma palavra com essa letra");
scanf("%c", &alfabeto);

switch(alfabeto){

case 'a': printf("abelha");break;                        //A
case 'b': printf("bola");break;                          //B
case 'c': printf("casa");break;                          //C
case 'd': printf("dado");break;                          //D
case 'e': printf("escola");break;                        //E
case 'f': printf("faca");break;                          //F
case 'g': printf("gato");break;                          //G
case 'h': printf("helicóptero");break;                   //H
case 'i': printf("igreja");break;                        //I
case 'j': printf("jacaré");break;                        //j
case 'k': printf("kiwi");break;                          //k
case 'l': printf("Lacoste");break;                       //l
case 'm': printf("macaco");break;                        //m
case 'n': printf("navio");break;                         //n
case 'o': printf("ovo");break;                           //o
case 'p': printf("pato");break;                          //P
case 'q': printf("queijo");break;                        //Q
case 'r': printf("rato");break;                          //R
case 's': printf("sapo");break;                          //S
case 't': printf("tatu");break;                          //T
case 'u': printf("uva");break;                           //U
case 'v': printf("vaca");break;                          //V
case 'w': printf("William");break;                       //w
case 'x': printf("xícara");break;                        //x
case 'y': printf("Yakult");break;                        //y
case 'z': printf("zebra");break;                         //z
default:  printf("código inválido");break;               // restante

}

 }


 