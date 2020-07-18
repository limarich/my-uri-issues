#include<stdio.h>

int main(){
	
	int vet[10], c, x;
	
	for(c = 0; c < 10; c++){
		scanf("%d", &x);
		if (x <= 0) x = 1;
		vet[c] = x;
	}
	for(c = 0; c < 10; c++) printf("X[%d] = %d\n", c, vet[c]);
	
	return 0;
}
