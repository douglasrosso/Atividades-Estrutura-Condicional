#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Elabore um algoritmo que leia dois números inteiros e efetue a adição; 
	caso o resultado seja maior que 10, imprima-o.*/
	int numb1, numb2, result;
	printf(">Defina o primeiro número: "); scanf("%d", &numb1);
	printf(">Defina o segundo número: "); scanf("%d", &numb2);
	result=numb1+numb2;
	if(result>10)
	{
		printf("~Seu resultado é : %d, e ele é maior que 10", result);
	}
}
