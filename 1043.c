#include<stdio.h>

float triangulo(float, float, float);
float trapezio(float, float, float);
int main()
{
	float a, b , c;

	scanf("%f %f %f", &a, &b, &c);
	
	if(a < b+c) {
		if(b < a+c){
			if(c < a+b){
				printf("Perimetro = %.1f\n",triangulo(a, b, c));
			}
				else printf("Area = %.1f\n",trapezio(a, b, c));
		}
		else printf("Area = %.1f\n",trapezio(a, b, c));
	}  
	else printf("Area = %.1f\n",trapezio(a, b, c));
	return 0;
}
float triangulo(float a, float b, float c){
	return(a+b+c);
}
float trapezio(float a, float b, float c){
	return((a+b)*c/2);
}
