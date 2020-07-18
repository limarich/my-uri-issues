#include<stdio.h>
#include<math.h>
main()
{
	int xf,xi,yf,yi,vi,r1,r2;
	double D;
	while(scanf("%d %d %d %d %d %d %d",&xf,&yf,&xi,&yi,&vi,&r1,&r2)!=EOF){

	//tem que fazer parte do conjunto de soluçoes para equaçao da circunferencia, se for tem que calcular se o inimigo vai escapar, pois o atacante demora 1.5 seg para agir, e se o tempo que o atacante precisa for maior que o tempo para o inimigo fugir tanto de seu rage quanto dos corvos, ele nao acertara
	
	D = sqrt(pow(xi-xf,2) + pow(yi-yf,2)) + vi*1.5;
	if(D <= (r1+r2))
	printf("Y\n");
	else
	printf("N\n");
	}
}
