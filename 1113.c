#include<stdio.h>

int main()
{
	int x, y;
	while(1){
		scanf("%d %d", &x, &y);
		if(x == y) break;
		x > y ? printf("Decrescente\n") : printf("Crescente\n");
		
	}
	return 0;
}
