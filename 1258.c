#include<stdio.h>
main()
{
 int N,c,x;
 char nomes[60][100],tam,cor[60][10],VP[60][100],VM[60][100],VG[60][100],BP[60][100],BM[60][100],BG[60][100];
 do{
 
 	scanf("%d",&N);
 	for(c=0;c<N;c++)
 	{
 		fgets(nomes[c],99,stdin);
 		scanf("%c",&tam);
 		fgets(cor[c],9,stdin);
 		if (cor[c]=="vermelho")
 		x=1;
 		if (cor[c]=="branco")
 		x=2;
		switch(x)
 		{
 			case 1:
 				switch(tam):
 					case "P":
 						VP[c]=nomes[c];
 						break;
 					case "M":
 						VM[c]==nomes[c];
 						break;
 					case "G":
 						VG[c]==nomes[c];
 						break;
 			case 2:
 				switch(tam):
 					case "P":
 						VP[c]=nomes[c];
 						break;
 					case "M":
 						VM[c]==nomes[c];
 						break;
 					case "G":
 						VG[c]==nomes[c];
 						break;
		 }
	 }
	 for(c=0;c<N;c++)
	 {
	 }
 }while((N!=0)&&(N<=60));
	
}
