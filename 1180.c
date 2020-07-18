#include <stdio.h>
#include <stdlib.h>

int main() {
	int *p;
	int x, men = 0, pos = 0, i;
	
	scanf("%d", &x);
	
	p = (int) malloc(sizeof(int)*x);
	for(i = 0; i < x; i++) {
		scanf("%d", p+i);
		if(i == 0) {
			pos = 0;
			men = p[i];
		}
		if(men > p[i]) {
			men = p[i];
			pos = i;
		}
	}
	printf("Menor valor: %d\nPosicao: %d\n", men, pos);
	
	return 0;
}
