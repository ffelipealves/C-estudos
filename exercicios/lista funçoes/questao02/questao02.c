#include<stdio.h>

/*2. Escreva um procedimento que recebe as 3 notas de um alu
no por par�metro e uma letra. Se a letra for A o procediment
o calcula a m�dia aritm�tica das notas do aluno, se for P, a sua m�dia po
nderada (pesos: 5, 3 e 2) e se for H, a sua m�dia harm�nica. A m�dia ca
lculada tamb�m deve retornar por par�metro.*/




int main(){

    float nota1=0,nota2=0,nota3=0;
    char media;

    printf("Digite 3 notas para o aluno: ");
    scanf("%d%d%d",&nota1,&nota2,&nota3);
    printf("Digite agora uma letra referente: \n'A'=Media Aritmetica\n'H'=Media Harmonica\n'P'=Media Ponderada\n");
    scanf(" %c",&media);




    return 0;
}
