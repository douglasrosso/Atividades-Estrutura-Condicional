#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/* Elabore um algoritmo que leia dois números
	 e imprima qual é maior e qual é menor.*/
	float n1, n2;
	printf(">Insira o primeiro número: "); scanf("%f", &n1);
	printf(">Insira o segundo número: "); scanf("%f", &n2);
	if(n1>n2)
	{
		printf("\n~O número maior é: %.0f\n", n1);
		printf("\n~O número menor é: %.0f\n", n2);
	}
	else {
		printf("\n~O número maior é: %.0f\n", n2);
		printf("\n~O número menor é: %.0f\n", n1);
		
	}
}
