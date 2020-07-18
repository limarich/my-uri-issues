#include <stdio.h>

int main() {
	int vet[10], n, i;
	
	scanf("%d", &n);
	for(i = 0; i < 10; i++ ) {
		vet[i] = n;
		n *= 2;
	}
	for(i = 0; i < 10; i++ ) {
		printf("N[%d] = %d\n",i, vet[i]);
	}
	
	return 0;
}
