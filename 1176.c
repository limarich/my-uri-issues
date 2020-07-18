#include <stdio.h>

int main() {
	int n, k, i = 1, j = 1;
	unsigned long long int Fib[61];
	
	Fib[0] = 0;
	Fib[1] = 1;
	for(i = 2; i < 61; i++) {
		Fib[i] = Fib[i-1] + Fib[i-2];
	}
	
	scanf("%d", &k);
	while(k--) {
		scanf("%d", &n);
		printf("Fib(%d) = %llu\n", n, Fib[n]);
	}
	
	return 0;
}
