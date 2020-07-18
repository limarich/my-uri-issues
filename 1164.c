#include <stdio.h>

int main() {
	int k, n, i, sum;
	scanf("%d", &k);
	while(k--) {
		scanf("%d", &n);
		for(i = 1, sum = 0;i < n; i++) {
			if(n % i == 0) {
				sum += i;
			}
		}
		if(sum == n) {
			printf("%d eh perfeito\n", n);
		} else {
			printf("%d nao eh perfeito\n", n);
		}
	}
	return 0;
}
