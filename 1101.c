#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y,soma, m;
	
	while (1){
		scanf("%d %d", &x, &y);
		if(x <= 0 || y <= 0) break;
		soma = 0;
		for(m = x < y ? x : y, x = x > y ? x : y; m <= x; m++){
			printf("%d ", m);
			soma += m;
		}
		printf("Sum=%d\n", soma);	
		
	}
	return 0;
}
