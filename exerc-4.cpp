#include<stdio.h>
#include<math.h>
#include<locale.h>
main()
{
	setlocale(LC_ALL,"Portuguese");
	/*Faça um programa que receba duas notas, calcule e mostre a 
	média aritmética e a mensagem que se encontra na tabela a seguir:*/
	float nota1, nota2, media;
	printf(">Insira sua primeira nota: "); scanf("%f", &nota1);
	printf(">Insira sua segunda nota: "); scanf("%f", &nota2);
	media=(nota1+nota2)/2;
	if(media<=3)
	{
		printf("\n~Sua situação: REPROVADO~\n");
	}
	else if (media<7)
	{
		printf("\n~Sua situação: EXAME~\n");	
	}
	else
	{
		printf("\n~Sua situação: APROVADO~\n");
	}
}
