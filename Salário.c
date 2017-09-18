# include<stdio.h>
# include<stdlib.h>

int main(){

    float horas, salario, salariob, salarioh, horExt, final;
    int dependents;

	printf("Informe a quantidade de horas trabalhadas\n");
	scanf("%f",&horas);

    printf("O valor que recebe por horas\n");
    scanf ("%f",&salario);

    printf("Quantidade de horas extra\n");
    scanf("%f",&horExt);

	printf("Numero de dependents\n");
	scanf("%d",&dependents);

	if(horExt>0){

            horExt=horExt*2;
    salarioh=salario*(horExt+horas);
    final=salarioh;


    }if(dependents>0){

        salario=salario*horas;
        salariob=salario*(dependents*0.05);
        final=salariob+salario;

    }if((horExt>0)&&(dependents>0)){

        final=salarioh+salariob;

    }if((horExt==0)&&(dependents==0)){

        salario=salario*horas;
        final=salario;

    }

    printf("O valor a receber sera:%.2f\n",final);

	system("pause");
	return 0;
}
