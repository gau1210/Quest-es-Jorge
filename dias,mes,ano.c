#include<stdlib.h>
#include<stdio.h>

int main(void){

	int anos,meses,dias,x,y;

	scanf("%d",&x);

	anos=x/360;
    y=x%360;
    meses=y/30;
    dias=y%30;

	printf("%d\n %d\n %d\n",dias,meses,anos);

	system("pause");
	return 0;

}
