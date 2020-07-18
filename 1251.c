#include<stdio.h>
#include<stdlib.h>
struct frequencia
{
	int frequencia;
	int valorASCII;
};
int comp (const void*p1, const void*p2)
{
	struct frequencia *v1 = (struct frequencia *)p1;
	struct frequencia *v2 = (struct frequencia *)p2;
	
	if(v1->frequencia != v2->frequencia)
	
		return (v1->frequencia - v2->frequencia);
	
	return (v2->valorASCII - v1->valorASCII);
}
main()
{	
	int aux = 1;
	char teste[10001];
	while(fgets(teste, 100000, stdin))
	{
		struct frequencia freq[96];
		int i;
		char *p;
		for(i = 0 ; i < 96; i++)
		{
			freq[i].frequencia = 0;
			freq[i].valorASCII = i + 32;
		}
		for(p = teste ;*p != '\n';++p)
		{
			++freq[*p-32].frequencia;
		}
		qsort( freq,96, sizeof(struct frequencia), comp);
		if (!aux)
		putchar('\n');
		for (i = 0; i < 96; i++)
		{
			if(freq[i].frequencia > 0)
			printf("%d %d\n", freq[i].valorASCII, freq[i].frequencia);
		}
		aux = 0;
	}
}
