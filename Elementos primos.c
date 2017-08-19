#include <stdio.h>
#include <math.h> // utilizar a fun��o de raiz quadrada (sqrt)
#define TAMANHO 2
#define VETOR 4
//Conven��o verifica = 1 --> O numero � primo
//          verifica = 0 --> O numero n�o � primo
int main(){

    int n[TAMANHO][TAMANHO],v[VETOR];
    int d,i,j,h,limite;
    int verifica; // bandeira indicativa de verifica��o de numero primo.

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
        if (v[h] > 1) { //s� verifica se o n�mero for maior que 1

            d = 2;
            verifica = 1;
            limite = sqrt(v[h]); // determina o limite de busca de dividendos at� a raiz quadrada do n�mero analisado

            while(verifica && d <= limite) //la�o de verifica��o
             {
               //se o n�mero for divis�vel por d, este n�o � primo
                if (v[h] % d  == 0){
                    //define como n�o primo
                    verifica = 0;
                }
                //incrementa o n�mero para testar
                 d++;
             }

            // imprime se primo
            if (verifica==1)

        printf("O n�mero %d, na posi��o: n[%d] � primo.\n",v[h],h);
        }
    }
    return 0;
}

