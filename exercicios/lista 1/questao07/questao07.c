#include<stdio.h>

/*
7) Fa�a um programa para ler do teclado uma quantidade de segundos e imprimir na tela a
convers�o para horas, minutos e segundos.
Exemplo:
Entrada: 3672
Sa�da: 1:1:12

*/


int main(){

    int segundos,minutos,horas,resto;

    printf("Digite um numero de segundos: ");
    scanf("%d",&segundos);

    horas=segundos/3600; //divimos os segundos pelo numero de segundos
                         // que estao contigo em 1 hora (3600s).
    resto=segundos%3600; //pegamos o resto da divis�o para acharmos os minnutos
    minutos=resto/60; //da mesma forma dividimos o resto das horas pela quantidade
                      // de segundos q estao contidas em 1 minuto (60s)
    segundos=resto%60; // por fim armazenamos nos segundo o resto da divisao
                    // do minutos, ou seja os segundos restantes
    printf("%d:%d:%d",horas,minutos,segundos);
}

