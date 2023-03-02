#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Faça um algoritmo que receba a idade e o peso de uma pessoa. De acordo com a tabela a 
	seguir, verifique e mostre em qual grupo de risco essa pessoa se encaixa.
	IDADE 			  					PESO 
					-	 Até 60 		- Entre 60 e 90 -  Acima de 90 
	Menores que 20 	- 		9 			- 		8 		- 		7 
	De 20 a 50 		- 		6 			- 		5 		- 		4 
	Maiores que 50 	- 		3 			- 		2 		- 		1 */
	float weigth, age; 
	int groupOfRisk;
	printf("'Informe no programa, sua idade e peso, para verificar,");
	printf("\nqual grupo de risto pertence.'\n");
	printf("\nInsira sua idade aqui: "); scanf("%f", &age);
	printf("\nInsira seu peso aqui: "); scanf("%f", &weigth);
	if (age<20){
		if (weigth<=60){
			groupOfRisk=9;
		}
			else if (weigth<=90){
				groupOfRisk=8;
			}
				else{
					groupOfRisk=7;
				}
	}
		else if (age<=50){
			if (weigth<=60){
				groupOfRisk=6;
			}
				else if (weigth<=90){
					groupOfRisk=5;
				}
					else{
						groupOfRisk=4;
					}
		}
			else{
				if (weigth<=60){
					groupOfRisk=3;
				}
					else if (weigth<=90){
						groupOfRisk=2;
					}
						else{
							groupOfRisk=1;
						}
			}
	printf("\nSeu grupo de risco corresponde ao número: [%d]", groupOfRisk);
	
}
