#include<stdio.h>

int main()
{
	
	int c, n, in, out;
	in = out = 0;
	
	scanf("%d", &c);
	
	while(c--){
		scanf("%d", &n);
		if(n >= 10 && n <= 20) in++;
		else out++;	
	} 
	printf("%d in\n%d out\n", in, out);
	
	return 0;
}
