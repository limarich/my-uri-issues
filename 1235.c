#include <stdio.h>
#include <string.h>

int main() {
 
	char str[100] = "", esquerda[100] = "", direita[100] = "";
	int i , j, c = 0, n;
	
	scanf("%d", &n);
	
	while(n--){
	
	setbuf(stdin, NULL);
	scanf("%[^\n]", &str);
	setbuf(stdin, NULL);
	
	i = strlen(str) - 1;
	c = 0;
	for(j = i; str[i]; i--) {
		if(i > j/2) {
			direita[c++] = str[i];
		}
		else {
			if(i == j/2) c = 0;
			esquerda[c++] = str[i];
		}
	}
		printf("%s%s\n", esquerda, direita);
		
		for(i = 0; esquerda[i]; i++) {
			esquerda[i] = 0;
		}
		for(i = 0; direita[i]; i++) {
			direita[i] = 0;
		}
	
	}
	return 0;
}
