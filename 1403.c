#include<stdio.h>
main()
{
	int x,M,N,v[10],c;
	do{	
		x = 1;
		scanf("%d", &M);
		scanf("%d", &N);
		if (M == N && N == 0)
		{
		x = 0;
		}
		else{
			scanf("%d", &v[10]);	
			}
		for (c = 0; c < 10; c++)
		{
			printf("%d", v[c]);
		}
	}while(x!=0);
}
