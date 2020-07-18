#include<stdio.h>

int main(){
	int n, cont;
	while(1){
	scanf("%d", &n);
	if(!n) break;
	for(cont = 1; cont <= n; cont++){
		printf("%d", cont);
		if (cont < n) printf("%c", 32);
		else printf("%c", 10);
	}
	}
	
	return 0;
}
