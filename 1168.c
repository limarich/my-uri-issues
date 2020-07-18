#include<stdio.h>

int qtd_led(char ch);
int main(int argc, char *argv)
{
	char num[100];
	int c, total, casos;
	
	scanf("%d", &casos);
	
	while(casos--){
	total = 0;
	scanf(" %s", num);
	for(c = 0; num[c]; c++)
		total += qtd_led(num[c]);
	printf("%d leds\n", total);
	}
	
	return 0;
}
int qtd_led(char ch){
	int x;
	switch(ch-'0'){
		case 0:
			x = 6;
			break;
		case 1:
			x = 2;
			break;
		case 2:
			x = 5;
			break;
		case 3:
			x = 5;
			break;			
		case 4:
			x = 4;
			break;			
		case 5:
			x = 5;
			break;			
		case 6:
			x = 6;
			break;			
		case 7:
			x = 3;
			break;			
		case 8:
			x = 7;
			break;			
		case 9:
			x = 6;
			break;							
	}
	
	return x;
}
