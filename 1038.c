#include<stdio.h>

int main()
{
	int cod, qtd;
	float valor;
	
		scanf("%d %d", &cod, &qtd);
		
		switch(cod){
			case 1:
				valor = 4.0*qtd;
				break;
			case 2:
				valor = 4.5*qtd;
				break;
			case 3:
				valor = 5.0*qtd;
				break;
			case 4:
				valor = 2.0*qtd;
				break;
			case 5:
				valor = 1.5*qtd;
				break;
		}
		printf("Total: R$ %.2f\n", valor);
	
	return 0;
}
