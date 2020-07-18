#include <stdio.h>

int main()
{
	double v, x;

	scanf("%lf", &v);
	
	if(v <= 400) x = 0.15;
	else if(v <= 800) x = 0.12;
	else if(v <= 1200) x = 0.10;
	else if(v <= 2000) x = 0.07;
	else x = 0.04;
	
	printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\nEm percentual: %.0lf %%\n", x * v + v, x * v, x*100);
	return 0;
}
