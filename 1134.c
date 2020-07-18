#include<stdio.h>

int main(){
	int r, g = 0, d = 0, a = 0;
	while(1){
		scanf("%d", &r);
		if(r == 1) a++;
		else if(r == 2) g++;
		else if(r == 3) d++;
		else if(r == 4) break;
	}
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);
	return 0;
}
