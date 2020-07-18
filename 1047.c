#include<stdio.h>

int main(int argc, char *argv)
{
	int h1, h2, m1, m2, hora_total, min_total;
	
	scanf("%d %d %d %d", &h1, &m1, &h2, &m2);
	hora_total = h2 - h1;
	if(hora_total < 0) hora_total += 24;
	min_total = m2 - m1;
	if(min_total < 0) {
		min_total += 60;
		hora_total--; 
	}
	if(hora_total < 0) hora_total += 24;
	if(h1 == h2 && m1 == m2) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	else printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hora_total, min_total);
	return 0;
}
