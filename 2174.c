#include<stdio.h>
#include<string.h>
main()
{
	int c,N,cont=0,i,aux;
	scanf("%d",&N);
	if(N>0){
	char mochila[N][1000];
	for(c=0;c<N;c++)
	{
		scanf("%s",mochila[c]);
	}
	for(c=0;c<N;c++)
	{
		aux=1;
		for(i=0;i<c;i++)
		{	
			if(strcmp(mochila[c],mochila[i])==0) 
				aux=0;
		}
		if(aux) 
			cont++;
	}
	printf("Falta(m) %d pomekon(s).\n",(151-cont));
}
}
