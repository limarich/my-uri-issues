#include <stdio.h>

int main() {
	int i = 0;
	double idade, sum = 0;
	
	while(1) {
		scanf("%lf", &idade);
		if(idade < 0) {
			break;
		}
		sum += idade;
		i++;
	}
	printf("%.2f\n", sum/i);
	
	return 0;
}
