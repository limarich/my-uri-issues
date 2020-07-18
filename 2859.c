#include<stdio.h>
#include<math.h>
#include<string.h>
int b, e, q, acc = 0;
char temp[100];
int recebe (void)
{
	scanf("%d", &b);//recebe b
	scanf("%d", &e);//recebe e
}
int digitRoot(int x, int y)// funçao que recebe um numero e soma seus  algarismos ate possuirem uma casa decimal
{	do{
	printf(".");
	q = acc;// se nao for a primeira vez o valor numerico que sera convertido passara a ser o acumulador
	if(acc == 0)
	{// se for a primeira vez nessa funçao(o acumulador sera 0)
	q = pow(x,y);
	printf(".");
	}
	sprintf(temp, "%d", q);// convertendo o valor numerico em string
	//if (strlen(temp == 1))//se acc for formado por um unico digito retorna uma resposta
	//else// se acc nao possuir um unico digito
	soma();// chamando a funçao que pega a string e soma todos os elementos apos converter
	printf(".");
	}while(strlen(temp != 1));
}
int soma (void)// soma os digitos
{	printf(".");
	int c,v;// contador do for
	for(c = 0; c < strlen(temp)-1;c++)// o laço vai passar por todos elementos da string temp	{	
		v = temp[c];
		printf("%d", v);
		acc = acc + atoi(v);// convertendo o digito em numero  e acumulando em acc
		printf("||");
	}
main()
{
	recebe();// funçao que recebe b e e
	digitRoot(b, e);// funçao que faz o digit root
	printf("%s", acc);
}
