#include<stdio.h>

/*
3) Fa�a um programa em C para trocar o valor de duas vari�veis inteiras sem utilizar nenhuma
vari�vel auxiliar
*/


int main(){

    int a=40,b=50;

    a=a+b; // a=40+50 ->90
    b=a-b; // b=90-50 ->40
    a=a-b; // a=90-40 ->50

    // ao final temos a=50 e b=40

    printf("a=%d,b=%d",a,b);

}
