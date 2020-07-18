#include <stdio.h>

int main()
{
	double a, b, c, maior, menor, temp;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	
	temp = a + b + c;
	maior = a > b ? a : b;
	maior = maior > c ? maior : c;
	menor = a < b ? a : b;
	menor = menor < c ? menor : c;
	a = maior;
	c = menor;
	b = temp - maior - menor;
	if(a < b + c){
		if(pow(a, 2) == pow(b, 2) + pow(c, 2)) printf("TRIANGULO RETANGULO\n");
		if(pow(a, 2) > pow(b, 2) + pow(c, 2)) printf("TRIANGULO OBTUSANGULO\n");
		if(pow(a, 2) < pow(b, 2) + pow(c, 2)) printf("TRIANGULO ACUTANGULO\n");
		if(a == b && a == c) printf("TRIANGULO EQUILATERO\n");
		if(a == b && a != c) printf("TRIANGULO ISOSCELES\n");
		if(b == c && b != a) printf("TRIANGULO ISOSCELES\n");
		if(a == c && a != b) printf("TRIANGULO ISOSCELES\n");
	}
	else printf("NAO FORMA TRIANGULO\n");	
	return 0;
}
