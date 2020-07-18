#include <stdio.h>

int main()
{
	int n, i, par, im, pos, neg;
	
	for(i = par = im = pos = neg = 0; i < 5; i++)
	{
		scanf("%d", &n);
		if(n < 0) neg++;
		else if(n > 0)pos++;
		if(n % 2 == 0) par++;
		else im++;
		
	}
	printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", par, im, pos, neg);
	
	return 0;
}
