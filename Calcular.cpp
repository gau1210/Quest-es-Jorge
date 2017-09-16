#include <stdio.h>
#include <stdlib.h>

int main(){

   int a,b,valor,result,fat=1;
   int i;

   printf("informe dois valores");
   scanf("%d %d",&a,&b);

   {

   printf("Digite:[1 p soma] [2 p sub] [3 p mult] [4 p div] [5 p fat]");
   scanf("%d",&valor);

  }switch(valor){

      case 1:

        result=a+b;

        break;

      case 2:

        result=a-b;

        break;

      case 3:

        result=a*b;

        break;

      case 4:

        result=a/b;

        break;

      case 5:

          if(a>=0){

            for(i=a;i>1;i--){

                fat=fat*i;
                result=fat;

            }
        }if(a==0){

        result=1;

        }
  }

  printf("%d\n",result);

  system("pause");
  return 0;

}
