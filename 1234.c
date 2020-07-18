#include<stdio.h>

int main()
{
	int i, caracter;
	char str[51] = "";
	
	while(scanf("%[^\n]", str) != EOF) {
		getchar();//->Para diminuir o tempo de execução
		//setbuf(stdin,NULL);
		for(caracter = 1, i = 0; str[i]; i++)
		{
			if(str[i] != ' ') {
				caracter++;
			}
			if(caracter % 2 == 0) {
				if(str[i] >= 'a' && str[i] <= 'z') {
					str[i] -= 32;
				}
			}
			else {
				if(str[i] >= 'A' && str[i] <= 'Z') {
					str[i] += 32;
				}		
			}
		}
		str[++i] = '\n';
		printf("%s\n",str);	
	}
}
