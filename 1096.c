#include<stdio.h>

int main()
{
	int i = 1, j = 7, c;
	
	for(c = 1; i < 10; c++)
	{
		printf("I=%d J=%d\n", i, j);
		j--;
		if(j == 4) j = 7;
		if(c % 3 == 0) i += 2;
	}
	return 0;
}
