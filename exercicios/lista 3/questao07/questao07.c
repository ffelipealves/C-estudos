#include<stdio.h>
#include<stdlib.h>

/*
7) Leia um valor inteiro N. Apresente o quadrado de cada um dos valores pares, de 1 até N,
inclusive N, se for o caso.
*/

int main(){

    int n,i;

    printf("Digite um valor para N: ");
    scanf("%d",&n);

    for(i=2;i<=n;i+=2){
        printf("\n%d ao quadrado = %d",i,i*i);
    }





}
