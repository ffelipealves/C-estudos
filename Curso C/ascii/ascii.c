#include<stdio.h>
#include<locale.h>

int main (){


    // o computador so consegue entender char por numeros binarios
    setlocale(LC_ALL,"Portuguese");
    printf("Cora��o\n");
    // para conseguirmos usar acentua��o preciamos aumentar o escopo
    // da tabela ascii 127 -> 255
    printf("%s\n", setlocale(LC_ALL,"Portuguese"));
}
