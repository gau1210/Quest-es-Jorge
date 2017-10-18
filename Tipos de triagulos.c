#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(){

	double a,b,c,A,B,C;

	scanf("%lf %lf %lf",&a,&b,&c);

	 if (a > b && a > c && b > c){
                A = a;
                B = b;
                C = c;
        }
        else if (a > b && a > c && c > b){
                A = a;
                B = c;
                C = b;
    }
    else if(b > a && b > c && a > c){
                A = b;
                B = a;
                C = c;
    }
         else if (b > a && b > c && c > a){
                A = b;
                B = c;
                C = a;
            }
    else if (c > a && c > b && a > b){
                A = c;
                B = a;
                C = b;
        }else{
                A = c;
                B = b;
                C = a;
            }

	if(A>=(B+C)){

		printf("NAO FORMA TRIANGULO\n");

	}if(pow(A,2)==(pow(B,2)+pow(C,2))){

			printf("TRIANGULO RETANGULO\n");

	}if(pow(A,2)>(pow(B,2)+pow(C,2))){

		printf("TRIANGULO OBTUSANGULO\n");

	}else{

		printf("TRIANGULO ACUTANGULO\n");

	}if((A==B)&&(A==C)&&(B==C)&&(B==A)&&(C==A)&&(C==B)){

	    printf("TRIANGULO EQUILATERO\n");

	}if((A==B!=C)||(A==C!=B)||(C==B!=A)){

	printf("TRIANGULO ISOSCELES\n");

	}

	system("pause");
	return 0;
}
