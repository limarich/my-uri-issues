#include<stdio.h>
int main()
{
int n1, q1, n2, q2;
float v1, v2, total;
scanf("%d %d %f", &n1, &q1, &v1);
scanf("%d %d %f", &n2, &q2, &v2);
total = (v1*q1) + (v2*q2);
printf("VALOR A PAGAR: R$ %.2f\n",total);
return 0;}
