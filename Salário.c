# include<stdio.h>
# include<stdlib.h>

int main(){

	double horas, salario, horExt;
	int depedents;

	printf("Informe a quantidade de horas trabalhadas");
	scanf("%lf",&horas);

    printf("O valor que recebe por horas");
    scanf ("%lf",&salario);

    printf("Quantidade de horas extra");
    scanf("%lf",&horExt);

	printf("Numero de dependents");
	scanf("%d",&depedents);

	salario*=horas;

	if(horExt>0){

        horExt=salario*2;
        salario=horExt;

	}

		printf("%.2lf",salario);

		system("pause");
		return 0;

}
