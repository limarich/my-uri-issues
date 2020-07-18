#include <stdio.h>

int main() {
	int n, x, y, sum;
	
	scanf("%d", &n);
	while(n--) {
		sum = 0;
		scanf("%d %d", &x, &y);
		while(y) {
			if(x % 2 != 0) {
				sum += x;
				y--;
			}
			x++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
