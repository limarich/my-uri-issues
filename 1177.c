#include<stdio.h>

int main()
{
	int vet[1000], x, i = 0, n;
	
	scanf("%d", &x);
	for(n = 0; n < 1000; n++){
		vet[n] = i++;
		if(i >= x) i = 0;
	}
	for(x = 0; x < 1000; x++)
		printf("N[%d] = %d\n", x, vet[x]);
	return 0;
}
