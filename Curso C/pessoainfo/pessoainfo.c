#include<stdio.h>

int main(){

    //Nesse programa iremos pedir certas informa�oes para o usuario////

    char sexo; // M ou F
    int idade; // idade eh um numero inteiro
    float peso, altura; // como a altura e peso sao valores quebrado,
                        // usamos float
    printf("Digite sua altura, idade, peso e sexo(f ou m)\n");
    scanf("%f%d%f %c",&altura,&idade,&peso,&sexo); // aqui lemos a informa�oes dadas
               // precisamos                        // pelo usuario
            // dar o espa�o no " %c" para desconsider o espa�o do char
    printf("==========SUA FICHA=========\n");
    printf("Altura: %.2f\nIdade: %d\nPeso: %.2f\nSexo: %c",altura,idade,peso,sexo);
    ////// por fim imprimimos os valores lidos e armazenados nas variaveis


}
