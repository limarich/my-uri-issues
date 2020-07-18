#include<stdio.h>
main()
{
	int w1,w2,r,aux;
	float m1,m2,M;
	int func(int x, int y);
	aux = 1;
	do{
	if (aux == 0 )
	{
		break;
	}
	else
	{
	scanf("%d", &w1);
	scanf("%d", &w2);
	scanf("%d", &r);
	if ((w1 == 0)&&(w2 == 0)&&(r == 0))
	{
	aux =0;
	}
	else
	{
		m1 = func(w1,r);
		m2 = func(w2,r);
		M = (m1+m2)/2;
		if((M < 13) && (M >= 1))
		{
			printf("funciona");
		}else if((M >= 13 ) && (M < 14))
	}
	}
	}while(aux != 0);
}
int func(int x, int y)
{
	return (x * (1 + (y/30)));
}
