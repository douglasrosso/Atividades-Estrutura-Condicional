#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Escreva um algoritmo para calcular e mostrar o salário reajustado de um funcionário. O 
	percentual de aumento encontra-se na tabela a seguir.
	Salário Percentual de aumento
	Até R$ 1500,00 - 35%
	Acima de 1500,00 - 15%*/
	float wage, readjustment;
	printf("Insira o valor atual do seu salário, ");
	printf("para descobrir qual será o valor final, com o reajuste.\n");

	printf("\n>Insira o seu salário atual: "); scanf("%f", &wage);
	if(wage<=1500){
		readjustment=(wage*0.35)+wage;
		printf("\nSeu salário com um aumento de 30%% é: %.2f.\n", readjustment);
	}
	else{
		readjustment=(wage*0.15)+wage;
		printf("\nSeu salário com um aumento de 15%% é: %.2f.\n", readjustment);
	}
	
}
