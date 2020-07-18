#include<stdio.h>
#include<stdlib.h>

int main()
{
	int m, n, p, q, i, j, cont;

	while(1){
		
	scanf("%d %d %d", &m, &n, &p);
	
	if(m == n && m == p && p ==0) break;

	for(i = 0, cont = 0, j = 0; i < p; i++){
		scanf("%d", &q);
		if(q <= m) cont  += (m - q + 1);
		else if(q > m) cont  += (m - (j*m) - q + 1);
		j++;
	}
	printf("Lights: %d\n", cont);
	}
	
	return 0;
}
