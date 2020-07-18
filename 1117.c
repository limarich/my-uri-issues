#include<stdio.h>

int main ()
{
	double x, y;
	
	while(1){
		scanf("%lf", &x);
		if (x < 0 || x > 10) printf("nota invalida\n");
		else break;
	}
	while(1){
		scanf("%lf", &y);
		if (y < 0 || y > 10) printf("nota invalida\n");
		else break;
	}
	printf("media = %.2lf\n", (x+y)/2);
	return 0;
}
