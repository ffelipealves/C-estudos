#include<stdio.h>

/*
5) Uma empresa contrata um encanador a R$ 45,00 por dia. Fa�a um programa que solicite o
n�mero de dias trabalhados pelo encanador e imprima a quantia l�quida que dever� ser paga,
sabendo que s�o descontados 8% para imposto de renda.
*/


int main(){

    int dias=0;           //iniciamos duas variaveis um para os dias
    float qnt_liquida=0;  //e outra referente a quantia liquida

    printf("Digite o numero de dias trabalhados: ");
    scanf("%d",&dias);

    qnt_liquida=45.0*dias; // n de dias trabalhados vezes 45,00RS
    qnt_liquida= qnt_liquida - (qnt_liquida*0.08); // desconto de 8% na quantia liquida

    printf("\nDevera ser pago R$ %.2f ja com desconto de IR",qnt_liquida);

}
