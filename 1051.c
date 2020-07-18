#include <stdio.h>

int main(){
	double s;
	
	scanf("%lf", &s);
	
	if(s >= 2000 && s <= 3000) printf("R$ %.2lf\n", (s - 2000) * 0.08);  
	else if(s >= 3000.01 && s <= 4500) printf("R$ %.2lf\n", (s - 3000) * 0.18 + 1000 * 0.08);
	else if(s > 4500) printf("R$ %.2lf\n", (s - 4500) * 0.28 + 1500 * 0.18 + 1000 * 0.08);
	if(s <= 2000) printf("Isento\n");
	
	return 0;
}
