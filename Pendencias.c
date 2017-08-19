#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define vetor 5 //Definicao do tamanho do vetor;
#define matriz 2 // Definicao do tamanho do array;


int main(){

	int v[vetor],m[matriz][matriz];//Declaracao;
	int n,i=0,j=0;

	//Insere vaalores no vetor;
	for (n=0;n<vetor;n++){

		printf ("\nElemento[%d] = ",n);
	    scanf ("%d", &v[n]);
	}

	for(n=0;n<vetor;n++){

            m[i][j]=v[n];//Passa os valores do vetor para o array;

                if(m[i][j]>=0){//Verifica se os valores são positivos se sim imprime se não imprime;

                    printf("%d\n",m[i][j]);

                }else{

                    printf("%d\n",m[i][j]);

            }

        }

        system("pause");
        return 0;

    }
