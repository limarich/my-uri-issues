#include<stdio.h>

int main()
{
	int n, m = 0, i, p;
	
	for(i = 0; i < 100; i++){
		scanf("%d", &n);
		p = n > m ? i : p;
		m = n > m ? n : m;
	}
	printf("%d\n%d\n", m, p+1);
	return 0;
}
