#include<stdio.h>

int main()
{
	double n, total;
	int c;
	
	scanf("%lf", &n);
	total += n*2;
	scanf("%lf", &n);
	total += n*3;
	scanf("%lf", &n);
	total += n*4;
	scanf("%lf", &n);
	total += n*1;
	total /= 10;
	if(total >= 7)
	{
		printf("Media: %.1lf\nAluno aprovado.\n", total);
	}
	else if(total >= 5)
	{
		printf("Media: %.1lf\nAluno em exame.\n", total);
		scanf("%lf", &n);
		printf("Nota do exame: %.1lf\n", n);
		total = (total + n)/2;
		if(total >= 5) printf("Aluno aprovado.\nMedia final: %.1lf\n", total);
		else printf("Aluno reprovado.\nMedia final: %.1lf\n", total);
	}
	else printf("Media: %.1lf\nAluno reprovado.\n", total);
	return 0;
}
