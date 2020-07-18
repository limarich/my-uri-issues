#include<stdio.h>

int main()
{
	int n, x, y, temp = 0, impar;
	
	scanf("%d", &n);
	
	while (n--){

	scanf("%d %d", &x, &y);
	temp = x > y ? x : y; //descobrindo quem é maior
	if(x != temp) y = x, x = temp;//y vai ficar  com o menor valor e x com o maior
	y++;
	for (; y < x; y++)
		if(y % 2 != 0) impar += y;	
	printf("%d\n", impar);
	impar = 0;
	}
	
	return 0;
}
