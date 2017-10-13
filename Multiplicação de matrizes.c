#include<stdlib.h>
#include<stdio.h>
#define tam1 2
#define tam2 3

int main(){

	int i,j,k;
	int a[tam1][tam2],b[tam1][tam2],c[tam1][tam2];

	for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){

    scanf("%d",&a[i][j]);

		}
	}

	for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){

    scanf("%d",&b[i][j]);

		}
	}

    for(i=0; i<tam1; i++){
        for(j=0; j<tam2; j++){
            for(k=0; k<tam2; k++){

        c[i][j]+=a[i][k]*b[k][j];

		        }
		    }
		}

	for(i=0; i<tam1; i++){

		for(j=0; j<tam2; j++){

			printf("matriz %d\n",c[i][j]);

			}

			printf("\n");

	    }

		printf("\n");

system("pause");
return 0;
}
