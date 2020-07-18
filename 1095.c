#include<stdio.h>

int main()
{
	int i = 1, j = 60, c;
	
	for(c = 0; j > -1; c++){
		printf("I=%d J=%d\n",i, j);
		i += 3;
		j -= 5;
	}
	
	return 0;
}
