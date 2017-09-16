#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(){

    double horas,salario,horExt;

    printf("informe a quant de horas trab");
    scanf("%lf",&horas);

    printf("o valor que recebe por horas");
    scanf("%lf",&salario);

    printf("Quantidade de horas Extra");
    scanf("%lf",&horExt);

    //printf("Numero de depedentes");
    //scanf("%d",&)

    salario*=horas;

    if(horExt>0){

        horExt*=horas;
        salario*=salario*horExt;
    }

    printf("%3.lf",salario);

        system("pause");
        return 0;

    }
