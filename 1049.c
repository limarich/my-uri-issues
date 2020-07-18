#include <stdio.h>
#include <string.h>

int main()
{
	char str[3][20] = {};

	scanf("%s%*c%s%*c%s", str[0], str[1], str[2]);
	
	if(!strcmp("vertebrado", str[0])){
		if(!strcmp("ave", str[1])){
			if(!strcmp("carnivoro", str[2]))
				printf("aguia\n");
			if(!strcmp("onivoro", str[2]))
				printf("pomba\n");
		}
		if(!strcmp("mamifero", str[1])){
			if(!strcmp("onivoro", str[2]))
				printf("homem\n");
			if(!strcmp("herbivoro", str[2]))
				printf("vaca\n");
		}
	}
	if(!strcmp("invertebrado", str[0])){
		if(!strcmp("inseto", str[1])){
			if(!strcmp("hematofago", str[2]))
				printf("pulga\n");
			if(!strcmp("herbivoro", str[2]))
				printf("lagarta\n");
		}
		if(!strcmp("anelideo", str[1]))
			if(!strcmp("hematofago", str[2]))
				printf("sanguessuga\n");
			if(!strcmp("onivoro", str[2]))
				printf("minhoca\n");
	}
	return 0;
}
