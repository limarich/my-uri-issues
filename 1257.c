#include<stdio.h>
#include<string.h>
void limpaStr(char *);
int valorHash(char *, int);
int main() {
	int n, l, sum, c;
	char str[51];
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &l);
		c = sum = 0;
		while(l--) {
			limpaStr(&str);
			scanf("%s", str);
			sum += valorHash(&str, c);
			c++;
		}
		printf("%d\n", sum);
	}
	return 0;
}
void limpaStr(char *str) {
	int i;
	for(i = 0; str[i]; i++) {
		str[i] = "";
	}
}
int valorHash(char *str, int c) {
	int x = 0, i;
	for(i = 0; i < strlen(str); i++) {
		x += (str[i] - 'A') + c + i;
	}
	return x;
}
