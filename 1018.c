#include<stdio.h>
int main()
{
int valor, i;
scanf("%d",&valor);
printf("%d\n", valor);
i = valor/100;
printf("%d nota(s) de R$ 100,00\n", i);
if(valor - i) valor-= i*100;
i = valor/50;
printf("%d nota(s) de R$ 50,00\n", i);
if(valor - i) valor-= i*50;
i = valor/20;
printf("%d nota(s) de R$ 20,00\n", i);
if(valor - i) valor-= i*20;
i = valor/10;
printf("%d nota(s) de R$ 10,00\n", i);
if(valor - i) valor-= i*10;
i = valor/5;
printf("%d nota(s) de R$ 5,00\n", i);
if(valor - i) valor-= i*5;
i = valor/2;
printf("%d nota(s) de R$ 2,00\n", i);
if(valor - i) valor-= i*2;
i = valor;
printf("%d nota(s) de R$ 1,00\n", i);
return 0;
}
