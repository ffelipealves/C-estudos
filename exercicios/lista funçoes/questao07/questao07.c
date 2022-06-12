#include<stdio.h>
#include<stdbool.h>

/*7. Fa�a uma fun��o que verifique se um valor � perfeito ou n�o. Um valor � dito perfeito quando ele �
igual a soma dos seus divisores excetuando ele pr�prio.
(Ex: 6 � perfeito, 6 = 1 + 2 + 3, que s�o seus divisores). A fun��o deve retornar um valor booleano.*/


bool perfeito(int numero){

    int i,divisor=0;

    for(i=1;i<=(numero/2);i++){
        if(numero%i==0){
            divisor=divisor+i;
        }
    }
    // se a soma dos divisores for igual ao numero, ele eh perfeito
    if(divisor==numero){
        return true;
    }
    // caso contrario n�o
    if(divisor!=numero){
        return false;
    }
}


int main(){


    printf("%d",perfeito(8128));

    return 0;
}
