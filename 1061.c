#include <stdio.h>

typedef	struct{
	int dia;
	int hora;
	int min;
	int seg;
	}data;
int main()
{	
	data d1, d2, d3;

	scanf("Dia %d", &d1.dia);
	scanf("%*c%d : %d : %d", &d1.hora, &d1.min, &d1.seg);
	scanf("%*cDia %d", &d2.dia);
	scanf("%*c%d : %d : %d", &d2.hora, &d2.min, &d2.seg);
	
	d3.dia = d2.dia- d1.dia;
	d3.hora = d2.hora - d1.hora;
	if(d3.hora < 0){
		d3.hora += 24;
		d3.dia--;
	}
	d3.min = d2.min - d1.min;
	if(d3.min < 0){
		d3.min += 60;
		d3.hora--;
		if(d3.hora < 0){
			d3.hora += 24;
			d3.dia--;
		}
	}
	d3.seg = d2.seg - d1.seg;
	if(d3.seg < 0){
		d3.seg += 60;
		d3.min--;
		if(d3.min < 0){
			d3.min += 60;
			d3.hora--;
			if(d3.hora < 0){
				d3.hora += 24;
				d3.dia--;
			}
		}
	}
	//if(d3.hora == 0 && d3.min == d3.seg && d3.min == d3.hora) d3.hora = 24;


	printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n", d3.dia, d3.hora, d3.min, d3.seg);
	
	return 0;
}

