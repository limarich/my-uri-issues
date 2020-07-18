#include<stdio.h>
#include<string.h>
main(void)
{
	int traducao, palavras;
	char chave1[51], chave2[51];//500
	char p1[10][51], p2[10][51];//50
	scanf("%d %d", &traducao, &palavras);
	for(; traducao > 0 ; traducao-- )
	{	printf("\nsecao  1 do codigo\n");
		setbuf(stdin,NULL);
		scanf("%c %c", chave1[traducao], chave2[traducao]);//armazenando de tras pra frente
	}
	for(; palavras > 0; palavras--)
	{	printf("\nsecao  2 do codigo\n");
		setbuf(stdin,NULL);
		scanf("%s %s", p1[palavras], p2[palavras]);//armazenando de tras para frente
	}
	troca(p1, chave1, chave2);
}
int troca(char p1[10][51], char chave1[51], char chave2[51])
{
	int c, i, k;
	for( c = 0; c < 10 ; c++)//matriz
	{
		for(i = 0 ; i < 51; i++)//string
		{
			for(k = 0; k < 51; k++)//chaves
			{
				if (p1[c][i] == chave1[k])
				{
					strcpy(p1[c][i], chave2[k]);//troca a letra  pela correspondente caso a letra de p1 for igual a da chave 1 
				}
			}
		}
	}
}
