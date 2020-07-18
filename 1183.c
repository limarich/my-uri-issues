#include<stdio.h>

int x = 1;

double sum(double m[12][12]);
int main() {
	double m[12][12], temp;
	char c;
	int i, j;
	
	scanf("%c", &c);
	for(i = 0; i < 12; i++) {
		for(j = 0; j < 12; j++) {
			scanf("%lf", &m[i][j]);	
		}
	}
	switch(c) {
		case 'S':
			printf("%.1lf\n", sum(&m));
			break;
		case 'M':
			printf("%.1lf\n", sum(&m)/x);
			break;
	}
	return 0;
}
double sum(double m[12][12]) {
	int i, j;
	double res = 0;
	for(i = 0; i < 12; i++) {
		for(j = 0; j < 12; j++) {
			if(j >= i) {
				res +=  m[i][j];
				x++;
			}
		}
	}
	return res;
}
