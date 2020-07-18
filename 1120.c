/*Feito por Richard Lima 
A funcao deve retornar o valor de uma string sem um determinado elemenento*/
#include<stdio.h>
#include<string.h>
void RetiraCaracter(char, char*);
int main()
{
	char caracter, numero[100];
	int x;
	while (1)
	{
	setbuf(stdin,NULL);
	scanf("%c %s", &caracter, numero);
	if (caracter == '0' && numero[0] == '0') break;
	RetiraCaracter(caracter, numero);
	}
	return 0;	
}
void RetiraCaracter(char caracter, char*numero)
{
	int i, c = 0, zeros = 0, cont = 0, tam = strlen(numero);
	char str[100] = {};
	for(i = 0; numero[i]; i++)
	{	
		if (numero[i] == caracter)
		{
			zeros++;
			do{
				cont++;
			}while(numero[cont] == '0');
			//if(numero[++i] == '0') cont++;
			continue;
		}			
		else
		{
			str[c++] = numero[i];	
		} 
	}
	//se todos forem iguais
	if (strlen(str) == 0) printf("0\n");
	//se terminar em 00
	else if(cont == tam) printf("0\n", cont);
	else printf("%s\n", str);
}
