#include<stdio.h>
int main()
{
	int c = 0, i;
	float n, m = 0;
	
	for(i = 0; i < 6; i++){
		scanf("%f", &n);
		if(n > 0){
			m += n;
			c++;
		} 
	}
	printf("%d valores positivos\n%.1f\n", c, m/c);
	return 0;
}
