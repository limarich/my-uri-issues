#include<stdio.h>
int main()
{
	int c = 0, i;
	float n;
	
	for(i = 0; i < 6; i++){
		scanf("%f", &n);
		if(n > 0) c++;
	}
	printf("%d valores positivos\n", c);
	return 0;
}
