#include<stdio.h> 

int main()
{
	int h1, h2;
	
	scanf("%d %d", &h1, &h2);
	
	if(h1 == h2) printf("O JOGO DUROU 24 HORA(S)\n");
	else{
	h2 = h2 - h1;
	if(h2 < 0) h2 += 24;
	printf("O JOGO DUROU %d HORA(S)\n", h2);
	} 
	
	return 0;
}
