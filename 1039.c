#include<stdio.h>
#include<math.h>

int main()
{
	float r1, r2, x1, x2, y1, y2, x, y, d;
	
	while(scanf(" %f %f %f %f %f %f", &r1, &x1, &y1, &r2, &x2, &y2) != EOF)
	{
	x = pow(x1-x2,2);
	y = pow(y1-y2,2);
	d = sqrt(x + y);
	if(r1 < r2) printf("MORTO\n");
	else if(r1 >= r2+d) printf("RICO\n");
	else printf("MORTO\n");
	}
	
return 0;	
}
