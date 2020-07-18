#include<stdio.h>
#define v 100
int main()
{
int N, c, i, maior = 0, count = 0;
char pac[v][v+1];

scanf("%d", &N);

for(c=0; c < N; c++)
scanf("%s", pac[c]);

for(c = 0; c < v; c++)
{

	if(c<=0)
	{
	for(i = 0; i < N+1 ;i++)
	{
	if(pac[c][i] == 'o'){
	count++;}
	if(pac[c][i] == 'A'){
	count = 0;
	}
	maior = count > maior ? count:maior;}
	}
	
	else if(c>=0)
	{
	for(; i > -1; i--)
	{
	if(pac[c][i] == 'o'){
	count++;}
	if(pac[c][i] == 'A'){
	count = 0;}
	maior = count > maior ? count:maior;}
	}
maior = count > maior ? count:maior;
}
printf("%d\n", maior);
}