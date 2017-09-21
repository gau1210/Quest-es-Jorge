# include<stdio.h>
# include<stdlib.h>


int main(void){
    
    float a,b,c;
	
	printf("Informe os tamanho dos lados do triangulo na ordem de A B e C");
	scanf("%f %f %f",&a,&b,&c);
	
	if((a==b)&&(a==c)&&(b==c)){
		
		printf("Equilatero");
		
	}if((a==b)&&(b==a)&&(a!=c)&&(b!=c)){
				
		printf("Isosceles");
				
	}if ((a!=b)&&(a!=c)&&(b!=a)&&(b!=c)&&(c!=a)&&(c!=b)){
			
		
		printf("Escaleno");
			
	}
				
	system("pause");
	return 0;
				
}
