#include<stdio.h>

int main()
{
	double valor;
	int qtd;
	scanf("%lf", &valor);
	qtd = (int) valor/100;
	valor -= qtd * 100;
	printf("NOTAS:\n%d nota(s) de R$ 100.00", qtd);
	qtd = (int) valor/50;
	valor -= qtd * 50;
	printf("\n%d nota(s) de R$ 50.00", qtd);
	qtd = (int) valor/20;
	valor -= qtd * 20;
	printf("\n%d nota(s) de R$ 20.00", qtd);
	qtd = (int) valor/10;
	valor -= qtd * 10;
	printf("\n%d nota(s) de R$ 10.00", qtd);
	qtd = (int) valor/5;
	valor -= qtd * 5;
	printf("\n%d nota(s) de R$ 5.00", qtd);
	qtd = (int) valor/2;
	valor -= qtd * 2;
	printf("\n%d nota(s) de R$ 2.00\n", qtd);

	qtd = (int) valor;
	valor -= qtd ;
	printf("MOEDAS:\n%d moeda(s) de R$ 1.00", qtd);
	qtd = valor/0.5;
	valor -= qtd * 0.5;
	printf("\n%d moeda(s) de R$ 0.50", qtd);
	qtd = valor/0.25;
	valor -= qtd * 0.25;
	printf("\n%d moeda(s) de R$ 0.25", qtd);
	qtd = valor/0.1;
	valor -= qtd * 0.1;
	printf("\n%d moeda(s) de R$ 0.10", qtd);
	qtd = valor/0.05;
	valor -= qtd * 0.05;
	printf("\n%d moeda(s) de R$ 0.05", qtd);
//	printf("\nvalor = %lf", valor);
	valor *= 100;
	printf("\n%.0lf moeda(s) de R$ 0.01\n", valor);
	
	return 0;
}
