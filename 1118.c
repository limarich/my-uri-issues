#include<stdio.h>

int main ()
{
	double x, y;
	int escolha;
	while(1){
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
		while(1){
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &escolha);
			if(escolha == 1 || escolha == 2) break;
		}
		if(escolha == 2) break;
	}
	return 0;
}
