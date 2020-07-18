/*#include <stdio.h>

int main() {
	double val, vet[100];
	int i = 0;
	
	scanf("%lf", &val);
	vet[i] = val;
	for(i = 0; i < 100; i++) {
		printf("N[%d] = %.4lf\n", i, vet[i]);
		val /= 2;
		vet[i+1] = val;
	}
	return 0;
}*/
#include <stdio.h>
int main()
{
   int a;
    double n[100],b,c,d;
    scanf("%lf", &b);
    n[a]=b;
    for(a=0; a<100;a++)
    {
        printf("N[%d] = %.4lf\n", a, n[a]);
        b/=2;
        n[a+1]=b;
    }
    return 0;
}
