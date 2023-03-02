#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Faça um programa que receba dois números e execute as operações listadas a seguir, de 
	acordo com a escolha do usuário. Se for digitada uma opção inválida, mostre uma 
	mensagem de erro e termine a execução do programa. As opções são:
	a) O primeiro número elevado ao segundo.
	b) Raiz quadrada de cada um dos números.
	c) Raiz cúbica de cada um dos números.*/
	float result;
	int numberOne, numberTwo, operations;
	printf("Insira 2 números inteiros, para após, executar as seguintes operações\n");
	printf("\n[1] - O primeiro número elevado ao segundo\n"); 
	printf("[2] - Raiz quadrada de cada um dos números\n"); 
	printf("[3] - Raiz cúbica de cada um dos números\n"); 
	printf("\n>Insira o primeiro número: "); scanf("%d", &numberOne);
	printf(">Insira o segundo número: "); scanf("%d", &numberTwo);
	printf("\n>Insira o número correspondente a uma das seguintes operações, [1], [2] ou [3]: "); scanf("%d", &operations);
	if(operations==1){
		result=pow(numberOne, numberTwo);
		printf("\nResultado do primeiro número, elevado ao segundo número é: %.2f\n", result);
	}
	else if(operations==2){
		result=sqrt(numberOne);
		printf("\nResultado da raiz quadrada de [%d] é: %f\n", numberOne, result);
		result=sqrt(numberTwo);
		printf("Resultado da raiz quadrada de [%d] é: %f\n", numberTwo, result);
	}
	else if(operations==3){
		result=cbrt(numberOne);
		printf("\nResultado da raiz cúbica de [%d] é: %f\n", numberOne, result);
		result=cbrt(numberTwo);
		printf("Resultado da raiz cúbica de [%d] é: %f\n", numberTwo, result);
	}
	else{
		printf("\nOperação invalida, tente novamente!\n", result);
	}
}
