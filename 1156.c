#include <stdio.h>

int main() {
	int i = 1, j = 1;
	float resp = 0;
	
	for(; i <= 39; i += 2, j += j) {
		resp +=  (double) i/j;
	}
	printf("%.2f\n", resp);
	return 0;
}
