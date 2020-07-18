#include<stdio.h>

int main()
{
	int v1, v2, at, d;
	float r1;
	
	setbuf(stdin, NULL);
	scanf("%d %d %d %d",&v1 ,&v2 ,&at ,&d );
	
	//calculando a probabilidade do valor do dado ser menor ou igual que d
	r1 = (float) at/6;
	
	printf("%.1f", r1*100);
	
	return 0;
}
