#include<stdio.h>
#define pi 3.14159
int main()
{
double raio, area;
printf("Escreva o raio:\n");
scanf("%lf", &raio);
area = raio*raio*pi;
printf("A=%.4lf\n", area);

return 0;
}
