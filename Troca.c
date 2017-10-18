#include<stdlib.h>
#include<stdio.h>

int main(){

	int matriz[2][2]={{1,2},{1,2}};
	int i,j=2,aux;

   	for(i=0; i<2; i++){

            aux=matriz[i][i];
            matriz[i][i]=matriz[j][i];
            matriz[j][i]=aux;

            printf("%d",matriz[j][i]);
            j--;
            printf("%d",matriz[i][i]);
            printf("\n");

   	}

	system("pause");
	return 0;
}
