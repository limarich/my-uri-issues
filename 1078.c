#include<stdio.h>

int main()
{
	int n, i;
	
	scanf("%d", &n);
	for(i = 1; i < 11; i++)
		printf("%d x %d = %d\n", i, n, n*i);
	
	return 0;
}
