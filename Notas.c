#include<stdlib.h>
#include<stdio.h>

int main(void)
{
    float valor;
	//Iniciliza o vetor com as notas em ordem do maior para o menor;
    float notas[] = { 100, 50, 20, 10, 5, 2, 1 };
	int i = 0;
    int quantidade;
	
	printf("informe um valor");
	scanf("%f", &valor);
	
    printf("NOTAS:\n");
	
	//Emquanto o valor não for 0 verifica se a outra nota até o valor;
	 while(notas[i] != 0) {
        quantidade = valor / notas[i];//divide o valor para saber a quantidade de notas
        printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i]);
        valor -= quantidade * notas[i];//multiplica a quantidade pelas notas e subitrai o valor;

        i++;
    }
	 system("pause");
    return 0;
}
