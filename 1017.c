#include<stdio.h>
int main()
{
int horas, velocidade;
scanf("%d %d", &horas, &velocidade);
printf("%.3f\n",(float)(horas*velocidade)/12);
return 0;
}
