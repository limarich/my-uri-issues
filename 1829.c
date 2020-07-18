#include<stdio.h>
#include<math.h>
#define Euler 2.71828182846
int pG = 0, lG = 0;

int main(void)
{
char operador;
int a,b,c;
int i, N;
//pG = lG = 0;
scanf("%d", &N); 
char vet [N];
for(i = 0 ; i < N; i++)
{
scanf("%d %c %d",&a,&operador,&b);
scanf("%d %c",&c,&operador);
if((double) c/Euler > a && c > b)
{
	pG++;
	vet[i] = 1;
}
else if(b*log(a) < log(2 * M_PI)/2.0 + (c + 1/2.0)*log(c) - c)
{
	pG++;
	vet[i] = 1;
}
else
{
	lG++;
	vet[i] = 0;
}
}
if(pG > lG)
printf("Campeao: Pedro!\n");
else if(lG > pG)
printf("Campeao: Lucas!\n");
else 
printf("A partida terminou empatada!\n");
for(i = 0; i < N; i++ )
{
if (vet[i]==1)
printf("Rodada #%d: Pedro foi o vencedor\n", i+1);
else 
printf("Rodada #%d: Lucas foi o vencedor\n", i+1);
}
}
