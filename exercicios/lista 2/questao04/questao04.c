#include<stdio.h>


/*
4) Crie um programa que permita ao usu�rio escolher entre fazer a convers�o de Real para D�lar ou
de D�lar para Real. Utilize como taxa de c�mbio $1 igual a R$5.30.
*/



int main(){

    int opcao;
    float real, dolar;

    printf("\nDigite 1 para Conversao Real->Dolar\nDigite 2 para Conversao Dolar->Real\n");
    scanf("%d",&opcao);

    switch(opcao){

        case 1:
            printf("Digite o valor em real: ");
            scanf("%f",&real);
            dolar=real/5.3;
            printf("R$ %.2f -> U$ %.2f\n",real,dolar);
            break;
        case 2:
            printf("Digite o valor em dolar: ");
            scanf("%f",&dolar);
            real=dolar*5.3;
            printf("U$ %.2f -> R$ %.2f\n",dolar,real);
            break;
        default:
            printf("Opcao Invalida");


    }

}
