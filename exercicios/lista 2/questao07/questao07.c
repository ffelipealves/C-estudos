#include<stdio.h>


/*
7) Fa�a um programa que pe�a ao usu�rio um caracter e diga se � uma vogal ou n�o.
*/



int main(){

    char letra;

    printf("Digite uma letra para descobrir se ela eh vogal: ");
    scanf("%c",&letra);

    switch(letra){

    case 'A':
        printf("Essa letra eh vogal");
        break;
    case 'E':
        printf("Essa letra eh vogal");
        break;
    case 'O':
        printf("Essa letra eh vogal");
        break;
    case 'a':
        printf("Essa letra eh vogal");
        break;
    case 'e':
        printf("Essa letra eh vogal");
        break;
    case 'o':
        printf("Essa letra eh vogal");
        break;
    default:
        printf("Essa letra nao eh vogal");


    }

}
