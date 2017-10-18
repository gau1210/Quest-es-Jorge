#include<stdlib.h>
#include<stdio.h>
#define tam 4

int main(){

	int i,j;
	int matriz[tam][tam];
	int vetor1[tam],vetor2[tam]={0};

	//Incluir valores a matriz.
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){

			scanf("%d",&matriz[i][j]);

		}
		printf("\n\n");
	}
	printf("\n\n");

	//Condição para diagonão secundária.
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){

    if(i+j==tam){

			vetor1[i]=matriz[i][j];

		    }
		}
	}

	//Condição para diagonal principal.
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){

    if(i==j){

			vetor2[i]=matriz[i][j];

            }

		}
	}

	printf("\n\n");

	//Troca das diagonais
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){

			if(i==j){

				matriz[i][j]=vetor2[i];
			}
			if(i+j==tam){

				matriz[i][j]=vetor1[i];
			}
		}
	}
	printf("RESULTADO\n");

	//Imprime o resultado
	for(i=0; i<tam; i++){
		for(j=0; j<tam; j++){

			printf("%4d",matriz[j][i]);

		    }
		printf("\n\n");
	}
	printf("\n\n");

	system("pause");
	return 0;
}
