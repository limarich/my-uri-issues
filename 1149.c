#include<stdio.h>

int main(){
	int a, n, i, soma = 0;
	
	scanf("%d %d", &a, &n);
	
	if(n <= 0)
	{
		while(1){
			
			if(n > 0) break; 
			
			scanf("%d", &n);
		}
	}
	
	for(i = 0; i < n; i++)
		soma += a+i;
		
	printf("%d\n", soma);
	
	return 0;
}
