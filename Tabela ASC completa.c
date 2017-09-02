#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(){

    //variaveis do programa, o i 顯 indice usado para contar o tamanho dos bytes.
    char letra;
    int i,r;

    //leitura do caracter.
    printf("Digite uma letra: ");
    scanf("%c",&letra);

    //Imprime o caracter em decimal, octla e hexadecimal.
    printf("Letra digitada [%c]\nDecimal [%d]\nOctla [%o]\nHexadecimal [%x]\n",letra,letra,letra,letra);

    //Imprime o caracter em binario verificando se  indice 頱 ou 0 e imprime.
    printf("valor em binario [");
    for(i=7; i>=0; i--){

        r=letra>>i;

        if(r&1){

            printf("1");

        }else{

            printf("0");
        }
    }
    printf("]\n");

    system("pause");
    return 0;

}
