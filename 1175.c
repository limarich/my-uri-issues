#include <stdio.h>

/*int main() {
	int i, val, vet[20];
	
	for( i = 19; i > -1; i--) {
		scanf("%d", &val);
		vet[i] = val;  
	}
	for( i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, vet[i]); 
	}
	return 0;
}*/
int main() {
	int i, j, vet[20];
	
		for(i = 0; i < 20; i++) {
			scanf("%d", &vet[i]);
		}
		for(i = 0; i < 10; i++) {
			j = vet[i];
			vet[i] = vet[19-i];
			vet[19-i] = j;
		}
		for( i = 0; i < 20; i++) {
		printf("N[%d] = %d\n", i, vet[i]); 
		}
	
	return 0;
}
