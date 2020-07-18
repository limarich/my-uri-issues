#include<stdio.h>
#include<stdlib.h>

int main()
{
	unsigned int *a;
	int n, c, i;
	
	scanf("%d", &n);
	
	a = (unsigned int *) malloc(sizeof(unsigned int) * n);
	if(!a) printf("ERRO!");
	
	for(c = 0; c < n; c++) scanf("%x", &a[c]);		
	for(i = 0; i < c; i++) printf("%c", a[i]);
	printf("\n");
	
	free(a);
	
	return 0;
}
