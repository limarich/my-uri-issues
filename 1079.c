#include<stdio.h>

int main()
{
	float n, s;
	int c;
	scanf("%d", &c);
	while(c--){
		s = 0;
		
		scanf("%f", &n);
		s += n*2; 
		scanf("%f", &n);
		s += n*3;
		scanf("%f", &n);
		s += n*5;
		printf("%.1f\n", s/10);
	}
	
	return 0;
}
