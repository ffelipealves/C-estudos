#include<stdio.h>


/*
6) Fa�a um programa para ler um n�mero inteiro e verificar se corresponde a um m�s v�lido no
calend�rio. Caso corresponda, escrever o nome do m�s, caso contr�rio, escrever a mensagem �M�s
Inv�lido�
*/



int main(){

    int mes;

    printf("Digite um numero de um mes do ano(1-12): ");
    scanf("%d",&mes);

    switch(mes){

        case 1:
            printf("Janeiro");
            break;
        case 2:
            printf("Fevereiro");
            break;
        case 3:
            printf("Marco");
            break;
        case 4:
            printf("Abril");
            break;
        case 5:
            printf("Maio");
            break;
        case 6:
            printf("Junho");
            break;
        case 7:
            printf("Julho");
            break;
        case 8:
            printf("Agosto");
            break;
        case 9:
            printf("Setembro");
            break;
        case 10:
            printf("Outubro");
            break;
        case 11:
            printf("Novembro");
            break;
        case 12:
            printf("Dezembro");
            break;
        default:
            printf("Mes invalido");

    }

}
