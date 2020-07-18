#include<stdio.h>
#include<stdlib.h>
int main()
{
int testes, numSo, m, c, i, j;

scanf("%d", &nc);

for(c = 0; c < nc; c++)
{
    j = 0;

    scanf("%d", &n);
    scanf("%d", &m);
    for(i = 0; i < n;i+=m)
        j++;
    printf("case %d: %d\n",c+1, j);
}

return 0;
}
