#include<stdio.h>

double sum(double m[12][12], int);
int main() {
	double m[12][12];
	char c;
	int i, j, n;
	
	scanf("%d %c", &n, &c);
	for(i = 0; i < 12; i++) {
		for(j = 0; j < 12; j++) {
			scanf("%lf", &m[i][j]);
		}
	}
	switch(c) {
		case 'S':
			printf("%.1lf\n", sum(&m, n));
			break;
		case 'M':
			printf("%.1lf\n", sum(&m, n)/12);
			break;
	}
	return 0;
}
double sum(double m[12][12], int n) {
	int i;
	double res = 0;
	for(i = 0; i < 12; i++) {
		res +=  m[n][i];
	}
	return res;
}
