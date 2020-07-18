#include<stdio.h>
#include<string.h>

int main(int argc, char argv[])
{
	int n, c, i, tam;
	char str[1000] = {}, temp;
	
	scanf("%d", &n);
	
	while(n){
		
	scanf(" %[^\n]", str);

	tam = strlen(str);
	//primeira passada
	for(c = 0; str[c]; c++){
		if((str[c] <= 122) && (str[c] >= 65))
			str[c] = str[c] + 3;
	}
	//segunda passada
	for (c = 0, i = tam -1; c < tam/2; c++, i--){
		temp = str[i];
		str[i] = str[c];
		str[c] = temp;
	}
	//terceira passada
	tam /= 2;
	for(c = tam; str[c]; c++)
	{
		str[c] = str[c] - 1;
	}
	printf("%s\n", str);
	memset(str, 0, sizeof(str));
	n--;
	}
	return 0;
}
