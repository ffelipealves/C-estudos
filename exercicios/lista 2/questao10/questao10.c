#include<stdio.h>

/*
9) Um usu�rio deseja um programa onde possa escolher que tipo de m�dia deseja calcular a partir
de tr�s notas. Fa�a um programa que leia as notas e o tipo da m�dia escolhida pelo usu�rio e calcule
a apresente a m�dia:
Op��es:
� �a� - Aritm�tica.
� �p� - Ponderada (pesos: 3,3,4).

a < b + c
b < a + c
c < a + b


*/



int main(){

    float ladoa,ladob,ladoc;

    printf("Digite tres lados para um triangulo\n");
    scanf("%f%f%f",&ladoa,&ladob,&ladoc);

    if(ladoa < (ladob + ladoc) || ladob < (ladoa + ladoc) || ladoc < (ladoa + ladob)){
        if(ladoa==ladob && ladob==ladoc){
            printf("\nTriangulo Equilatero\n");
        }else if(ladoa!=ladob && ladob!=ladoc && ladoc!=ladob && ladoa!=ladoc){
            printf("\nTriangulo Escaleno");
        }else{
            printf("\nTriangulo isosceles");
        }

    }else{
        printf("\nEsse triangulo nao existe\n");
    }

}
