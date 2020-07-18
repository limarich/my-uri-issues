#include<stdio.h>
#include<math.h>
int main()
{
int a, b, c;
scanf("%d %d %d", &a, &b, &c);
if(maior(a,b) == maior(a,c)) printf("%d eh o maior\n",a);
else if(maior(a,b) == maior(b,c)) printf("%d eh o maior\n",b);
else printf("%d eh o maior\n",c);
return 0;
}
int maior(int a, int b)
{
    return (a+b+abs(a-b))/2;

}
