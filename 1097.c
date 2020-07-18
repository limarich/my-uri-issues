#include<stdio.h>

int main(){
	
	int i = 1, j = 7, c = 1;
	
	printf("I=%d J=%d\n", i, j);
	while(i <= 9){
	
		if(c % 3 == 0){
		i += 2;
		j += 2;	
		c = 0;
		}
		if(i > 9) break;
		printf("I=%d J=%d\n", i, j - c);
		c ++;
	}
	
	return 0;
}
