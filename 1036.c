#include<stdio.h>
#include<math.h>
int main()
{
	double a, b, c, r1, r2, delta;
	scanf("%lf %lf %lf", &a, &b, &c);
	delta = pow(b, 2) - (4*a*c);
	r1 = (sqrt(delta)-b)/(2*a);
	r2 = (-sqrt(delta)-b)/(2*a);
	if((- (4*a*c)) > pow(b, 2)) delta = -1;
	if((delta < 0) || (a == 0)) printf("Impossivel calcular\n");
	else printf("R1 = %.5lf\nR2 = %.5lf\n", r1, r2);
	return 0;
}
