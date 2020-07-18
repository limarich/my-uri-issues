#include <stdio.h>

int func(int v) {
	if(v % 2 == 0) {
		return 0;
	}
	return 1;
}
int main() {
	int n, v;
	
	scanf("%d", &n);
	
	while(n--) {
	scanf("%d", &v);
	printf("%d\n", func(v));
	}
	
	return 0;
}
