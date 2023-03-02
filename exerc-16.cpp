#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Faça um algoritmo que receba o preço de um produto e seu código de origem e mostre sua 
	procedência. A procedência obedece à tabela a seguir.
	CÓDIGO DE ORIGEM 	- PROCEDÊNCIA 
	1 					- Sul 
	2 					- Norte 
	3 					- Leste 
	4 				%	- Oeste 
	5 ou 6 				- Nordeste 
	7 ou 8 ou 9 		- Sudeste 
	10 a 20 			- Centro-oeste 
	21 a 30 			- Nordeste*/
	float price;
	int code;
	printf("Insira o valor do produto e seu código de origem, ");
	printf("descobrir de qual estado ele é.\n");
	printf("\n>Insira o preço do seu produto: "); scanf("%f", &price);
	printf("\n>Insira o código de origem do produto: "); scanf("%f", &code);
	if (code==1)
	{
		printf("Seu produto é fabricado no Sul.");
	}
	else if (code==2)
	{
		printf("Seu produto é fabricado no Norte.");
	}
	else if (code==3)
	{
		printf("Seu produto é fabricado no Leste.");
	}
	else if (code==4)
	{
		printf("Seu produto é fabricado no Oeste.");
	}
	else if (code==5 || code==6)
	{
		printf("Seu produto é fabricado no Nordeste.");
	}
	else if (code==7 || code==8 || code==9)
	{
		printf("Seu produto é fabricado no Sudeste.");
	}
	else if (code>=10 && code<=20)
	{
		printf("Seu produto é fabricado no Centro-Oeste.");
	}
	else if (code>=21 && code<=30)
	{
		printf("Seu produto é fabricado no Nordeste.");
	}
	printf("\nValor do seu produto: %.2f", price);
}

