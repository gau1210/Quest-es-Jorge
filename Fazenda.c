#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include<math.h>
#define LIMITE 1

int main()
{
 float PR1[3];
 char nome[3][30],nome2[3][30];
 int x,z=1;

 for(x=0;x<LIMITE;x++)
 {
 printf("Informe nome da fazenda %d: ",x+1);
 gets(nome[x]);

 printf("Informe o valor produzido fazenda %s: ",nome[x]);
 scanf("%f",&PR1[x]);

 gets(nome2[x]);
 z++;

 }

 printf("_______________________");
 printf("\n\nNome\tValor1");
 printf("\n_____________________");
 for(x=0;x<LIMITE;x++)
 {
 printf("\n%s\t%3.2f",nome[x],PR1[x]);
 }
 printf("\n______________________________________");

 printf("\n\n");
 system("pause");
 return(0);
}
