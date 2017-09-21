#include<stdlib.h>
#include<stdio.h>

int main(){

	float custo,desconto;
	int tipo,acre;

	printf("Qual a praga\n");
	printf("[1]Erva Daninha\n[2]Gafanhoto\n[3]Broca\n[4]Todos\n");
	scanf("%d",&tipo);

	printf("Tamanho da fazenda\n");
	scanf("%d",&acre);



	switch(tipo){

		case 1:

		custo=50*acre;

		printf("Custo normal:%.2f\n",custo);

		break;

		case 2:

		custo=100*acre;

		printf("Custo normal:%.2f\n",custo);

		break;

		case 3:

		custo=150*acre;

		printf("Custo normal:%.2f\n",custo);

		break;

		case 4:

		custo=250*acre;

		printf("Custo normal:%.2f\n",custo);

		break;

	}if(acre>1000){

			desconto=custo*0.05;
			custo-=desconto;

			printf("Custo com desconto:%.2f\n",custo);

		}if(custo>750.00){

			desconto=custo*0.10;
			custo-=desconto;

			printf("Custo com desconto:%.2f\n",custo);

		}if(acre>1000&&custo>750.00){

			desconto=desconto*0.05;
			custo-=desconto;

			printf("Custo com desconto:%.2f\n",custo);
		}

		system("pause");
		return 0;
}
