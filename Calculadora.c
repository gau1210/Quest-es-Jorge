#include<stdio.h>
#include<stdlib.h>

int  main () {

	float a, b, resultado, fat =1 ;
	int i,valor;

   //Crianção do Menu do sistema;
   do{

       printf("informe dois valores\n");
       scanf("%f%f",&a,&b);

	   printf("[1 p soma]\n[2 p sub]\n[3 p mult]\n[4 p div]\n[5 p fat]\n[0 para sair]\nDigite:");
       scanf("%d",&valor);

		   switch(valor){

			   case 1:

			   resultado = a+b;

			   printf("%.0f\n",resultado);

			   break;

			   case 2:

			   resultado = a-b;

			   printf("%.0f\n",resultado);

			   break;

			   case 3:

			   resultado = a*b;

			   printf("%.0f\n",resultado);

			   break;

			   case 4:

			   if(b!=0){

			   resultado = a/b;

			   printf("%.1f\n",resultado);

			   }else{

               printf("Nao e possivel dividir\n");

			   }

			   break;

			   case 5:

			   if(a>0){

				   //Calcula o fatorial;
				   for(i=a;i>1;i--){

					   fat=fat*i;
					   resultado=fat;

					}

			   }if(a==0){

				   resultado=1;

				}

			    printf("%.0f\n",resultado);

				break;
			}

		}while(valor!=0);//Condição de saida do programa;


	system("pause");
	return 0;

}
