#include<stdio.h>
#include<string.h>
main()
{
	int t,c,op,p=0,g=0;
	int x[51],y[51],z[51];
	char n[50][51], r[51], opcaoCerta[51], perdedores[51];
	scanf("%d", &t);
	//limpando a string
	for (c = 0; c < strlen(perdedores); c++)
	{
		perdedores[c] = '\0';
	}
	for(c = 0; c < t; c++)
	{
	scanf("%d%d%d",&x[c],&y[c],&z[c]);
	if((x[c]*y[c])==z[c]){
	opcaoCerta[c] = '*';
	} else if((x[c]+y[c])==z[c]){
	opcaoCerta[c] = '+';
	} else if((x[c]/y[c])==z[c]){
	opcaoCerta[c] = '/';
	} else if((x[c]-y[c])==z[c]){
		opcaoCerta[c] = '-';
	} else{
	opcaoCerta[c] = 'I';
	}
	}
	for(c = 0; c < t; c++)
	{	
		scanf("%s", n[c]);
		scanf("%d",&op);
		setbuf(stdin,NULL);
		scanf("%c", &r[c]);
	}
	for(c = 0; c < t; c++ )
	{
		printf("\n%c|%c\n",r[op-1],opcaoCerta[c]);
		if(r[op-1]==opcaoCerta[c])
		{
			printf("certo");
			g++;
			
		}
		else
		{
			printf("errado");
			p++;
			strcat(perdedores, n[c]);
			strcat(perdedores," ");
		}
	}
		if (p == t)
			{
				printf("None Shall Pass!\n");
			} else if  (g == t)
			{
				printf("You Shall All Pass\n");
			} else 
		{
			printf("%s\n", perdedores);
		}
}
