#include<stdio.h>


/*
25) Escreva um programa que leia dois valores X e Y. A seguir, mostre uma sequ�ncia de 1 at� Y,
passando para a pr�xima linha a cada X n�meros.
Exemplo de entrada:
3 99
Exemplo de sa�da:
1 2 3
4 5 6
7 8 9
10 11 12
...
97 98 99
*/

int main(){

    int x=2,y=23,i=0,j,numero=1;

    while(i!=1){
        for(j=0;j<x;j++){
            printf("%d ",numero);
            numero++;
            if(numero==y+1){
                i=1;
                j=x;
            }
        }
        printf("\n");

    }

 //Melhor Maneira
 /*
 for(i=1;i<=y;i++){
    printf("%d ",i);
    if(i%x==0){
        printf("\n");
    }
 }
 */

}
