#include<stdio.h>

int main()
{
	int x, y,i;
	
	scanf("%d %d", &x, &y);
	
	i = x < y ? x : y;
	x = x > y ? x : y;
	y = 0;
	
	for(i++; i < x ; i++)
		if(i % 2 != 0) y += i;
	
	printf("%d\n", y);
	
	return 0;
}
