#include<stdio.h>
int main()
{
	int tempo;
	scanf("%d", &tempo);
	printf("%d ano(s)\n", tempo/365);
	printf("%d mes(es)\n", tempo%365/30);
	printf("%d dia(s)\n", tempo%365%30);
	return 0;
}
