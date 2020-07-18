#include<stdio.h>
	int N,c,aux;
	struct camisa
	{	char *PMG;
		char nome[50];
		char tam;
		char cor[10];
		char nomeP[50];
		char nomeM[50];
		char nomeG[50];
	};
	struct camisa branco[60];
	struct camisa vermelho[60];
void aponta (struct camisa lista[c]);
main()
{	void recebe(struct camisa[60]);
	void classifica (struct camisa[60]);
	void print1(struct camisa[60]);
	void print2(struct camisa[60]);
	struct camisa lista[60];
	do
	{
	scanf("%d",&N);
	for (c=0;c<N;c++)
	{
	recebe(lista);
	aponta(lista);
	classifica(lista);
	}
	for(c=0;c<N;c++){
	print1(branco);
	print2(vermelho);
	}
	}while(N!=0);
	
}
void recebe (struct camisa lista[60])
{
		for(c=0;c<N;c++)
		{
			scanf("%s%c%s",&lista[c].nome,&lista[c].tam,&lista[c].cor);
		}
}
void aponta (struct camisa lista[c]){
	for(c=0;c<N;c++){
		lista[c].PMG=lista[c].nome;
	}
}
void classifica (struct camisa lista[60])
{	
		for (c=0;c<N;c++)
		{
			if(lista[c].cor=="vermelho")
			aux=1;
			else
			aux=2;
			switch(aux){
				case 1:
					switch(lista[c].tam){
						case 'P':
							vermelho[c].nomeP[50]= lista[c].nome;
							vermelho[c].tam= lista[c].tam;
					
							break;
						case 'M':
							vermelho[c].nomeM[50]=lista[c].nome;
							vermelho[c].tam= lista[c].tam;
							
							break;
						case 'G':
							vermelho[c].nomeG[50]=lista[c].nome;
							vermelho[c].tam= lista[c].tam;
							
							break;}
					break;
				case 2:
						switch(lista[c].tam){
						case 'P':
							branco[c].nomeG[50]= lista[c].nome;
							branco[c].tam= lista[c].tam;

							break;
						case 'M':
							branco[c].nomeM[50]=lista[c].nome;
							branco[c].tam= lista[c].tam;
							
							break;
						case 'G':
							branco[c].nomeG[50]=lista[c].nome;
							branco[c].tam= lista[c].tam;
							
							break;}
					break;
			}	
		}
}
void print1(struct camisa vermelho[60])
{
	for(c=0;c<N;c++)
	{
		printf("vermelho %c %s%s%s/n",vermelho[c].tam,vermelho[c].nomeG,vermelho[c].nomeM,vermelho[c].nomeP);
	}
}
void print2(struct camisa branco[60])
{
	for(c=0;c<N;c++)
	{
		printf("branco %c %s%s%s/n",branco[c].tam,branco[c].nomeG,branco[c].nomeM,branco[c].nomeP);
	}
}

