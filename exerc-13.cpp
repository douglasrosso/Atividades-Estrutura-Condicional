#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*O preço ao consumidor de um carro novo é a soma do custo de fábrica com a porcentagem 
	do distribuidor e dos impostos, ambos aplicados ao custo de fábrica. As porcentagens 
	encontram-se na tabela a seguir. Faça um algoritmo que receba o custo de fábrica de um 
	carro e mostre o preço ao consumidor.
	-	Custo de Fábrica 					- 	% do distribuidor 	- 	% dos impostos
	-	Até R$ 15.000,00 					- 	5 					- 	isento
	-	Até R$ 15.000,00 e até R$ 25.000,00 - 	10 					- 	15
	-	Acima de R$ 25.000,00 				- 	15 					- 	20*/
	float factoryCost, finalPrice;
	printf("A seguir, insira o preço de fábrica de um veículo, ");
	printf("para descobrir preço final para o cliente.\n");
	printf("\n>Insira o valor do veículo: "); scanf("%f", &factoryCost);
	if(factoryCost>25000){
		finalPrice=(factoryCost*0.15)+(factoryCost*0.2)+factoryCost;
		printf("\n~Valor do veículo com preço de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	else if(factoryCost>15000){
		finalPrice=(factoryCost*0.10)+(factoryCost*0.15)+factoryCost;
		printf("\n~Valor do veículo com preço de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	else {
		finalPrice=(factoryCost*0.05)+factoryCost;
		printf("\n~Valor do veículo com preço de fabrica [%.2f], ", factoryCost);
		printf("valor final para o cliente [%.2f].\n", finalPrice);
	}
	
}
