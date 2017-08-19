#include <stdio.h>
#include <math.h> // utilizar a função de raiz quadrada (sqrt)
#define TAMANHO 2
#define VETOR 4
//Convenção verifica = 1 --> O numero é primo
//          verifica = 0 --> O numero não é primo
int main(){

    int n[TAMANHO][TAMANHO],v[VETOR];
    int d,i,j,h,limite;
    int verifica; // bandeira indicativa de verificação de numero primo.

    verifica=1;
    for(i=0; i<TAMANHO ;i++)
        for(j=0; j<TAMANHO ;j++)
            {
            printf ("\nElemento[%d][%d] = ", i, j);
            scanf ("%d", &n[i][j]);
        }

        h=0;
        for(i=0; i<TAMANHO ;i++)
            for(j=0; j<TAMANHO ;j++)
                {
        v[h]=n[i][j];
        h++;

        }
    for(h=0; h<VETOR ;h++)
        {
        if (v[h] > 1) { //só verifica se o número for maior que 1

            d = 2;
            verifica = 1;
            limite = sqrt(v[h]); // determina o limite de busca de dividendos até a raiz quadrada do número analisado

            while(verifica && d <= limite) //laço de verificação
             {
               //se o número for divisível por d, este não é primo
                if (v[h] % d  == 0){
                    //define como não primo
                    verifica = 0;
                }
                //incrementa o número para testar
                 d++;
             }

            // imprime se primo
            if (verifica==1)

        printf("O número %d, na posição: n[%d] é primo.\n",v[h],h);
        }
    }
    return 0;
}

