#include<stdlib.h>
#include<stdio.h>

int main(){
	
	int tentados,completados,jardas,
	touchdown,interceptados;
	
	printf("Passes tentados\n");
	scanf("%d",&tentados);
	printf("Passes completos\n");
	scanf("%d",&completados);
	printf("Jardas passadas");
	scanf("%d",&jardas);
	scanf("%d",&touchdown);
	scanf("%d",&interceptados);
	
	percentual=(tentados*completados)/100;
	percentual=(percentual-0.3)/0.2;
	
	if((percentual>2.375){
		
		percentual=2.375;
		
	}if(percentual<0){
		
		percentual=0;
		
	}
	
	razao=jardas*tentados
	
	
	