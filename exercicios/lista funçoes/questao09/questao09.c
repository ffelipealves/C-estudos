#include<stdio.h>
#include<stdbool.h>

/*
9. Fa�a uma fun��o que recebe um valor inteiro e
verifica se o valor � positivo ou negativo.
A fun��o deve retornar um valor booleano.
*/


bool positivoOuNegativo(int num){

    if(num<0){
        return false;
    }else{
        return true;
    }


}

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d",&numero);
    printf("\n0-Seu valor eh negativo\n1-Seu valor eh positivo\n");
    printf("Resposta: %d",positivoOuNegativo(numero));



    return 0;
}
