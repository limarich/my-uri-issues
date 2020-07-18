#include<stdio.h>
main()
{
	int c;
	int recebe(int c);
	scanf("%d", &c);
	recebe(c);
}
int recebe(int c)
{	int i;
	int k;
	int r;
	int cont;
	int d; 
	int atq;
	int peso;

	for (i = 0; i < c; i++)
	{
		atq = 0;
		peso = 0;
		int mun;
		scanf("%d", &mun);
		for(cont = 0; cont < mun; cont++)
		{
			int x[mun];
			int y[mun];
			scanf("%d", &x[cont]);
			scanf("%d", &y[cont]);
			peso += y[cont];
			if (peso < k)
			atq = atq + x[cont];
			}
			printf("%d",  atq);
		}
		scanf("%d", &k);
		scanf("%d", &r);
		if (atq > r)
		printf("Vitoria");
		else 
		printf("Derrota%d", atq);
	}

