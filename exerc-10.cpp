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
	/*Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 
	1.500,00. Escreva um algoritmo em que receba o salário do funcionário e mostre o valor do 
	salário reajustado ou uma mensagem, caso ele não tenha direito ao aumento.*/
	float wage, readjustment;
	printf("Insira o valor atual do seu salário, ");
	printf("para descobrir qual será o valor final, com o reajuste.\n");

	printf("\n>Insira o seu salário atual: "); scanf("%f", &wage);
	if(wage<1500){
		readjustment=(wage*0.3)+wage;
		printf("\nSeu salário com um aumento de 30%% é: %.2f.\n", readjustment);
	}
	else{
		printf("\nSeu salário não pode ser reajustado, pois excede R$ 1.500,00.\n", readjustment);
	}
	
}
