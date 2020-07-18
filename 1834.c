#include<stdio.h>
#include<string.h>
#include<math.h>
main()
{
int x1, x2, y1, y2, c=0, leste=0, oeste=0,hl=0,ho=0, x3, y3, n,b, casualidade=0,k;
float dist, m;
scanf("%d", &x1);
scanf("%d", &x2);
scanf("%d", &y1);
scanf("%d", &y2);
scanf("%d", &k);
x3 = x2-x1;
y3 = y2-y1;
dist = sqrt((x3*x3)+(y3*y3));
m = (y2-y1)/(x2-x1);
b = (m * x1) - y1;

for (;k >=1 ; k ++)
{
	int x, y, h;
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &h);
	if(y == (x * m) + b){
		casualidade ++;
	} else if (x < 0 ){
		oeste++;
		ho += h;
	} else if (x > 0){
		leste++;
		hl += h;
	}
}
puts("Relatorio Vorgon #35987-2");
printf("Distancia entre referencias: %.2f anos-luz\n", dist);
printf("Setor Oeste:\n");
printf("- %d planeta(s)\n", oeste);
printf("- %d habitantes\n", ho);
printf("Setor Leste:\n");
printf("- %d planeta(s)\n", leste);
printf("- %d habitantes\n", hl);
printf("Casualidades: %d planeta(s)",casualidade);
}
