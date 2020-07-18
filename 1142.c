#include<stdio.h>

int main(){
	int x, cont = 1;
	
	scanf("%d", &x);
	while(x--){
		for(; cont <= (x + 1) * 4; cont++){
			if(cont % 4 == 0) printf("PUM\n");
			else printf("%d ", cont);
		}
	}
	
	return 0;
}
