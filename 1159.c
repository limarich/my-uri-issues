#include <stdio.h>

int main() {
	int x, i, sum;
	while(1) {
		sum = 0;
		i = 5;
		scanf("%d", &x);
		if(x == 0) {
			break;
		}
		while(i) {
			if(x % 2 == 0) {
				sum += x;
				x++;
				i--;
			}
			x++;
		}
		printf("%d\n", sum);
	}
	
	return 0;
}
