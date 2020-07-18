#include<stdio.h>

int main()
{
	int v1, v2, v3, menor, maior, meio;
	
	scanf("%d %d %d", &v1, &v2, &v3);
	
	menor = v1 < v2? v1 : v2;
	menor = menor < v3? menor : v3;
	maior = v1 > v2 ? v1 : v2;
	maior = maior > v3 ? maior : v3;
	meio = v1+v2+v3;
	meio = meio-maior-menor;
	printf("%d\n%d\n%d", menor, meio, maior);
	printf("\n\n");
	printf("%d\n%d\n%d\n", v1, v2, v3);

	return 0;
}
