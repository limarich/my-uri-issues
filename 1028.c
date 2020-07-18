#include<stdio.h>

int main()
{
	int num1, num2, casos, c;
	
	scanf("%d", &casos);
	
	for(; casos > 0; casos--){
	
	scanf("%d %d", &num1, &num2);
	
	while(num2 != 0)
	{
		c = num1%num2;
		num1 = num2;
		num2 = c;
		
	}
	printf("%d\n", num1);
	/*
	menor = num1 < num2 ? num1:num2;
	maior = num1 > num2 ? num1:num2;
	*/
	/*for(c = menor ; c <= menor; c--)
		if(num1 % c == 0 && num2 % c == 0 ) break;

	printf("%d\n", c);*/
	}
	return 0;
}
