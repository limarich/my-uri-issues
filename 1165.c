#include <stdio.h>

int main() {
	int k, n, i, sum;
	scanf("%d", &k);
	while(k--) {
		scanf("%d", &n);
		for(i = 1, sum = 0;i < n; i++) {
			if(n % i == 0) {
				sum++;
			}
		}
		if(sum == 1) {
			printf("%d eh primo\n", n);
		} else {
			printf("%d nao eh primo\n", n);
		}
	}
	return 0;
}
