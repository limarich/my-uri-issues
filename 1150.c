#include <stdio.h>

int main(){
	int a, z, i, soma = 0;
	
	scanf("%d %d", &a, &z);
	
	if(z <= a)
	{
		while(1){
			
			if(z > a) break;
			
			scanf("%d", &z);
		}
	}
	for(i = 0; soma < z; i++, a++)
	{
		soma += a;
	}
	printf("%d\n", i);
	return 0;
}
