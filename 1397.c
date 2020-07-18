#include<stdio.h>
main()
{
	int N,c,cont1,cont2;
	N = c = cont1 = cont2 = 0; 
	while(scanf("%d", &N) && N!=0){
	for (c=0;c<N;c++)
	{
		int A,B;
		scanf("%d %d",&A, &B);
		if(A>B)
		{
			cont1++;
		}
		else{
		if(B>A)
		{
			cont2++;
		}
		}
	}
	printf("%d %d\n",cont1,cont2);
	cont1=cont2=0;
}
}
