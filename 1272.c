#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main ()
{

	char string[51], segredo[51], lixo;
	int i, j;
	int casos;

	scanf("%d", &casos);
	scanf("%c", &lixo); // Trata o buffer do scanf anterior;
	
	while (casos--)
	{
		
		scanf("%[^\n]", string);
		scanf("%c", &lixo); // Trata o buffer do scanf anteior;
	
		i = 0;
		j = 0;

		// La�o dura at� que o caractere nulo seja alcan�ado;
		while (string[i])
		{

			// Se o caractere no �ndice atual for um espa�o, simplesmente avan�e;
			if (string[i] == ' ')
				i++;
	
			else
			{	
				// Caso contr�rio, ser� uma letra
				// Ent�o coloque essa letra na string resultado;
				segredo[j++] = string[i++];

				// Enquanto os pr�ximos caracteres tamb�m forem letras, apenas avan�e;
				// Dessa forma, quando encontrar um espa�o, cair� no primeiro 'if' e avan�ar� os espa�os
				// At� encontrar uma letra;
				while (isalpha(string[i]))
					 i++;	
			}	
		}

		// Grava o caractere nulo ao final da string para marcar o seu final;
		segredo[j] = '\0';
		printf("%s\n", segredo);
		memset(string, 0, sizeof(string));
	}

}
