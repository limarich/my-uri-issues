#include<stdio.h>

int main()
{
	int co, sa, ra, c, n;
	char tipo;
	co = ra = sa = 0;
	scanf("%d", &c);
	while(c--){
		scanf("%d%*c%c", &n, &tipo);
		//setbuf(stdin, NULL);
		if(tipo == 'C') co += n;
		else if(tipo == 'R') ra += n;
		else if(tipo == 'S') sa += n;
	}
	printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\n"
	"Total de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",co+sa+ra, co,
	 ra, sa, (float)co/(co+sa+ra)*100,(float)ra/(co+sa+ra)*100,(float)sa/(co+sa+ra)*100);
	
	return 0;
}
