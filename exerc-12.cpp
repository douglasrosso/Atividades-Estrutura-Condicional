#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*.Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no 
	último ano. Faça um algoritmo que receba o saldo médio de um cliente e calcule o valor do 
	crédito, de acordo com a tabela a seguir. Mostre o saldo médio e o valor do crédito. 
	Saldo Médio 				Mensagem
	Acima de R$4.000,00 - 		30% do saldo médio
	R$ 4.000,00 R$ 3.000,00 - 	25% do saldo médio
	R$ 3.000,00 R$ 2.000,00 - 	20% do saldo médio
	Até R$ 2.000,00 - 			10% do saldo médio*/
	float annualBalance, credit;
	printf("Insira a média anual do seu saldo em poupança/aplicação, ");
	printf("para descobrir qual será o valor de crédito disponível.\n");

	printf("\n>Insira a média do seu saldo: "); scanf("%f", &annualBalance);
	if(annualBalance>4000){
		credit=(annualBalance*0.3)+annualBalance;
		printf("\nSeu saldo médio é [%.2f], você tem [%.2f] de crédito disponível.\n", annualBalance, credit);
	}
	else if(annualBalance>3000){
		credit=(annualBalance*0.25)+annualBalance;
		printf("\nSeu saldo médio é [%.2f], você tem [%.2f] de crédito disponível.\n", annualBalance, credit);
	}
	else if(annualBalance>2000){
		credit=(annualBalance*0.2)+annualBalance;
		printf("\nSeu saldo médio é [%.2f], você tem [%.2f] de crédito disponível.\n", annualBalance, credit);
	}
	else {
		credit=(annualBalance*0.1)+annualBalance;
		printf("\nSeu saldo médio é [%.2f], você tem [%.2f] de crédito disponível.\n", annualBalance, credit);
	}
	
}
