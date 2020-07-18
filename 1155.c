#include <stdio.h>

int main() {
	int i;
	float resp = 0;
	
	for(i = 1; i <= 100; i++) {
		resp +=  (double) 1/i;
	}
	printf("%.2f\n", resp);
	return 0;
}
