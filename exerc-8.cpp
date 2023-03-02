#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Elabore um algoritmo que receba dois números e execute as 
	operações listadas a seguir, de acordo com a escolha do usuário.
	Escolha do usuário	- 			Operação
			1 			- Média entre os números digitados;
			2 			- Diferença do maior pelo menor;
			3 			- Produto entre os números digitados;
			4 			- Divisão do primeiro pelo segundo;
	*/
	float numberOne, numberTwo, result;
	int operations;
	printf(">Insira um número aleátorio: ", "%f"); scanf("%f", &numberOne);
	printf(">Insira outro número aleátorio: ", "%f"); scanf("%f", &numberTwo);
	printf(">Insira um número de '1' a '4': ", "%f"); scanf("%d", &operations);
	if(operations==1)
	{
		result=(numberOne*numberTwo)/2;
		printf("Resultado da média entre os números digitados é: %.2f", result);
	}
	else if(operations==2)
	{
		if(numberOne>numberTwo){
			result=numberOne-numberTwo;
		}
		else {
			result=numberTwo-numberOne;
		}
		printf("\n~Resultado da diferença do maior pelo menor é: %.2f", result);
	}
	else if(operations==3)
	{
		result=numberOne*numberTwo;
		printf("\n~Resultado do produto entre os números digitados é: %.2f", result);
	}
	else if(operations==4)
	{
		result=numberOne/numberTwo;
		printf("\n~Resultado da divisão do primeiro pelo segundo é: %.2f", result);
	}
	else {
		printf("\n~Resultado invalido\n", result);
	}
	
}
