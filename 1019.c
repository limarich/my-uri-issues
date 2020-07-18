#include<stdio.h>
int main()
{
	int tempo,c;
	scanf("%d",&tempo);
	c = tempo/60;
	printf("%d:%d:%d\n",c/60 ,c%60,tempo%60);
	return 0;	
}
