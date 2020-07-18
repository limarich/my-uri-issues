#include<stdio.h>

int main()
{
	int c, x;
	
	scanf("%d", &c);
	while(c--)
	{
		scanf("%d", &x);
		if(x % 2 == 0 && x != 0) printf("EVEN ");
		else if(x == 0) printf("NULL\n");
		else printf("ODD ");
		if(x < 0) printf("NEGATIVE\n");
		else if(x > 0) printf("POSITIVE\n");
	}
	
	return 0;
}
