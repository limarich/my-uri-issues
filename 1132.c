#include<stdio.h>

int main()
{
	int x, y, temp;
	
	scanf("%d %d", &x, &y);
	temp = x > y ? x : y;
	if(x != temp) y = x, x = temp;
	for(temp = 0; y <= x; y++) if(y % 13 != 0) temp += y;
	printf("%d\n", temp);
	
	return 0;
}
