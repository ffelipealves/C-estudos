#include<stdio.h>

//variaveis sao usadas para armazenar um espa�o na memoria

int main(){

    int valor,valor2; //variavel declarada do tipo inteiro
                //-> espa�o separado na memoria

    valor = 50; //atribuimos guardamos o valor no espa�o reservado

    printf("%d\n\n",valor);

    printf("digite um valor inteiro\n");
    scanf("%d",&valor2); // -> fun��o q vai ler o que o usuario
                        // digitar e armazenar na determinada varia
                        // vel e jogar no espa�o reservado

    printf("o seu valor eh: %d",valor2);


////////////////////////agr numeros reais//////////////////////////////////////////
    float valor3,valor4; // destinamos um espa�o de memoria
                        // para um valor float e chamaos de valor3,valor4
                        // esses espa�oes

    valor3=123.3453; // atribuimos valor a esses espa�os

    printf("\n\n%f\n",valor3); // segue a mesma logica, printamos
                                // o que foi armazenado no valor3
    printf("digite um valor real\n");
    scanf("%f",&valor4);
    printf("o seu valor eh: %f\n\n",valor4);

//////////////////////// TIPO CHAR AGR /////////////////////////////Q

    char sexo;    // da mesma forma criamos um espa�o na memo
                        // ria para armazenar um caractere e chamamos
                        // o espa�o de sexo=variavel

    sexo='M';   // armazenamos ao sexo o char M

    printf("seu sexo eh %c\n\n",sexo);

    printf("digite seu sexo: (F/M)\n\n");
    scanf("%c",&sexo);
    printf("seu sexo eh %c",sexo);

    //esta bugando


    return 0;

}
