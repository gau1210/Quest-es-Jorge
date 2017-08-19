#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define vetor 10 //Definicao do tamanho do vetor;

int main(){

	int v[vetor];//Declaracao das variáveis;
	int aux=0,j=0,i=0;

	//Atribuido valores ao vetor;

	for(i=0; i<vetor; i++){

        printf("Elemento%d\n",i);
        scanf("%d",& v[i]);

	}
	    for(i=vetor; i<vetor; i++){
            for(j=i+1;j<vetor;j++){
                if(v[i] > v[j]){

		 aux = v[i];   // usa uma variável auxiliar para fazer as trocas
		 v[i] = v[j];
	     v[j] = aux;

            }
        }
    }
    //Impreção dos valores menores pros
    //maiores quando de i=0 ate o tamanho do arrey;
    for(i=0; i<vetor;i++){

        printf("%d\n",v[i]);

    }
    system("pause");
    return 0;
}
