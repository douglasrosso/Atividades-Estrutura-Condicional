#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Faça um algoritmo que receba o preço, a categoria (1-limpeza; 2-alimentação; ou 3-
vestuário) e a situação (R-produtos que necessitam de refrigeração; e N-produtos que não 
necessitam de refrigeração). 
Calcule e mostre: 
• O valor do aumento, usando as regras que se seguem.
PREÇO 	-	CATEGORIA 	-	PERCENTUAL DE AUMENTO 
 -------------------------------------------------
		-		1 		-			5% 
<= 25	-		2 		-			8% 
		-		3 		-			10% 
 -------------------------------------------------
		-		1 		-			12% 
> 25	-		2 		-			15% 
		-		3 		-			18% 
• O valor do imposto, usando as regras a seguir. 
O produto que preencher pelo menos um dos seguintes requisitos pagará imposto 
equivalente a 5% do preço; caso contrário, pagará 8%. Os requisitos são: 
Categoria: 2 
Situação: R 
• O novo preço, ou seja, o preço mais aumento menos imposto. 
• A classificação, usando as regras a seguir.
NOVO PREÇO			 			CLASSIFICAÇÃO 
<= R$ 50,00 					Barato 
Entre R$ 50,00 e R$ 120,00		Normal 
>= R$ 120,00 					Caro*/

	main()
	{
		setlocale(LC_ALL, "Portuguese");
		float price, imp;
		int category;
		char icy;
		printf("Digite 'r' para  produto que necessita de refrigeração, e 'n' para produtos normais\n");
		printf("\nTipo do produto: "); scanf("%c", &icy);
		printf("\n------------------------------------------------------------------------------------\n");
		printf("Insira o preço do produto: "); scanf("%f", &price);
		printf("\n-----------------------------------------------------------\n");
		printf("Digite '1' - limpeza, '2' - alimentação ou '3' - vestuário");
		printf("\nInsira a categoria do produto: "); scanf("%d", &category);
		
		
		if (price<=25) {
			switch (category)
			{
				case 1:
					imp=0.05;
				break;
				case 2:
					imp=0.08;
				break;
				case 3:
					imp=0.1;
				break;
			}
		} 
		else {
			switch (category)
			{
				case 1:
					imp=0.12;
					break;
						case 2:
							imp=0.15;
							break;
								case 3:
									imp=0.18;
									break;
			}
		}
		printf("\n-----------------------------------\n");
		printf("Categoria ");
		if (price <= 50) {
			printf("Barato");
		} 
			else if (price < 120) {
				printf("Normal");
			} 	
				else {
					printf("Caro");
				}
		imp=imp*price;
		printf("\nPreço com o imposto fica: R$%.2f", price+imp);
		
	}
