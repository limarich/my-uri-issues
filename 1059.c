#include<stdio.h>
int main()
{
	int c = 1;
	for(; c < 101; c++)
		if(c % 2 == 0) printf("%d\n", c);
			
	return 0;
}
