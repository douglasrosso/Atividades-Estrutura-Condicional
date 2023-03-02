#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/* Elabore um algoritmo que leia três números e imprima o menor número.*/
	float n1, n2, n3;
	printf("\n>Insira o primeiro número: "); scanf("%f", &n1);
	printf(">Insira o segundo número: "); scanf("%f", &n2);
	printf(">Insira o terceiro número: "); scanf("%f", &n3);
	if(n1<n2&&n1<n3){
		printf("\n~O número menor é: %.0f\n", n1);
	}
	else if(n1>n2&&n2<n3){
		printf("\n~O número menor é: %.0f\n", n2);
	}
	else {
		printf("\n~O número menor é: %.0f\n", n3);
	}
}
