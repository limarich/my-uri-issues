#include<stdio.h>

int main() {
	int n, t, v, sum = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d", &t, &v);
		sum += v * t;
	}
	printf("%d\n", sum);
	return 0;
}
