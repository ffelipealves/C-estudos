#include<stdio.h>

/*
6) Crie um programa em C que permita fazer a convers�o cambial entre Reais e D�lares. Considere
como taxa de c�mbio US$1,0 = R$5,30. Leia um valor em Reais e mostre o correspondente em
D�lares.

*/


int main(){

    float real,dolar;

    printf("\nDigite um valor em real: ");
    scanf("%f",&real);
    dolar=real/5.3; // simplesmente fazemos a conversao dividindo o real por 5,30

    printf("\nR$ %.2f reais equivale a US$ %.2f dolares",real,dolar);


}
