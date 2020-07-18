#include <stdio.h>

int main() {
	int x, c, par[5], impar[5], p, i, j;
	
	p = i = 0;
	for(c = 0; c < 15; c++)	{
		scanf("%d", &x);
		if(x % 2 == 0) {
			if(p == 5) {
				for(j = 0; j < p; j++) {
					printf("par[%d] = %d\n", j, par[j]);
				}
				p = 0;
			}
			par[p] = x;
			p++;
		} else {
			if(i == 5) {
				for(j = 0; j < i; j++) {
					printf("impar[%d] = %d\n", j, impar[j]);
				}
				i = 0;
			}
			impar[i] = x;
			i++;
		}
	}
	for(j = 0; j < i; j++) {
					printf("impar[%d] = %d\n", j, impar[j]);
				}
	for(j = 0; j < p; j++) {
					printf("par[%d] = %d\n", j, par[j]);
				}			
	
	return 0;
}
