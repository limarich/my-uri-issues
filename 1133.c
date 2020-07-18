#include<stdio.h>

int main(){
	
	int x, y, temp;
	
	scanf("%d %d", &x, &y);
	temp = x > y ? x : y;
	if(x != temp) y = x, x = temp;
	for(y++; y < x; y++) if(y % 5 == 2 || y % 5 == 3) printf("%d\n", y);
	return 0;
}
