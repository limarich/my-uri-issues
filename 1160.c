#include <stdio.h>

int verifica(int pa, int pb, double ga, double gb) {
	int i = 0;
	while(pa <= pb) {
			pa += (int) pa*ga/100;
			pb += (int) pb*gb/100;
			i++;
			if(i > 100) {
				return 0;
			}
		}
		return i;
}
int main() {
	int n, pa, pb, i;
	double ga, gb;
	
	scanf("%d", &n);
	while(n--) {
		scanf("%d %d %lf %lf", &pa, &pb, &ga, &gb);
		i = verifica(pa, pb, ga, gb);
		if(i) {
			printf("%d anos.\n", i);
		}
		else {
			printf("Mais de 1 seculo.\n");
		}
	}
	return 0;
}
