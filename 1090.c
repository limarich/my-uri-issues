#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void verifica(char qtd[100][100], char forma[100][100], int q[3], int t[3], int c[3], int i, int saida);
int main()
{
	int ent, i;
	char qtd[100][100], forma[100][100];
	int q[3] = {0,0,0}, t[3] = {0,0,0}, c[3] = {0,0,0}, valor[3] = {0,0,0}, saida = 0;
	do{
		saida = 0;
		scanf("%d", &ent);
		if(!ent) exit(1);
		for(i = 0; i < ent; i++)
		{
			scanf("%s %s", qtd[i], forma[i]);
			verifica(qtd, forma, q, t, c, i, saida);
		}
		printf("%d", saida);

	}while(ent != 0);
	
	return 0;
}
void verifica(char qtd[100][100], char forma[100][100], int q[3], int t[3], int c[3], int i, int saida)
{
	int cont;
		if(!strcmp(forma[i],"quadrado")||(!strcmp(forma[i],"quadrados"))) {
			if(!strcmp(qtd[i],"um")) q[0] += 1;
			else if(!strcmp(qtd[i],"dois")) q[1] +=1;
			else if(!strcmp(qtd[i],"tres")) q[2] += 1;
		}
		if(!strcmp(forma[i],"triangulo")||(!strcmp(forma[i],"triangulos"))) {
			if(!strcmp(qtd[i],"um")) t[0] += 1;
			else if(!strcmp(qtd[i],"dois")) t[1] +=1;
			else if (!strcmp(qtd[i],"tres")) t[2] += 1;
		}
		if(!strcmp(forma[i],"circulo")||(!strcmp(forma[i],"circulos"))) {
			if(!strcmp(qtd[i],"um")) c[0] += 1;
			else if(!strcmp(qtd[i],"dois")) c[1] +=1;
			else if(!strcmp(qtd[i],"tres")) c[2] += 1;
		}
		//verificando se é possivel agrupar as cartas iguais
		for(cont = 0; cont < 3; cont++)
		{
			if(q[cont] >= 3)
			{
				saida += (q[cont]/3);
				q[cont] = q[cont]%3; 
			}
			if(t[cont] >= 3)
			{
				saida += (t[cont]/3);
				t[cont] = t[cont]%3; 
			}
			if(c[cont] >= 3)
			{
				saida += (c[cont]/3);
				q[cont] = c[cont]%3; 
			}
		}
		//verificando se é possivel agrupar tipos iguais com quantidades diferentes
		for(cont = 0; cont < i; cont++)
		{
			if(q[0] < 3)
			{
				if( (q[1] >= 1) && (q[2] >= 1) ){
					saida ++;
					q[0]--;
					q[1]--;
					q[2]--;
				}
			}
			if(t[0] < 3)
			{
				if( (t[1] >= 1) && (t[2] >= 1) ){
					saida ++;
					t[0]--;
					t[1]--;
					t[2]--;
				}
			}
			if(c[0] < 3)
			{
				if( (c[1] >= 1) && (c[2] >= 1) ){
					saida ++;
					c[0]--;
					c[1]--;
					c[2]--;
				}
			}
									
			
		}
		//verificando se sao de tipos diferentes com valores diferentes
		for(cont = 0; cont < i; cont++)
		{
			if(q[cont])
			{
				if(t[cont+1])
				{
					if(c[cont+2])
					{
						saida++;
						q[cont]--;
						t[cont]--;
						c[cont]--;
					}
				}
			}
		}
}

