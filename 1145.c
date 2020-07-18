#include<stdio.h>

int main(){
	int x,y, cont;
	
	scanf("%d %d", &x, &y);
	for(cont = 1; cont <= y; cont++){
		printf("%d%c",cont, 32);
		if(cont % x == 0) printf("\n");
	}
	//printf(" ");
	
	return 0;
}
