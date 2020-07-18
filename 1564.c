#include<stdio.h>
int main() {
	unsigned int n;
	while(scanf("%d", &n) != EOF) {
		if(n < 1) {
			printf("vai ter copa!\n");
		} else {
			printf("vai ter duas!\n");
		}
	}
	return 0;
}
