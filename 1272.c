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

		// Laço dura até que o caractere nulo seja alcançado;
		while (string[i])
		{

			// Se o caractere no índice atual for um espaço, simplesmente avançe;
			if (string[i] == ' ')
				i++;
	
			else
			{	
				// Caso contrário, será uma letra
				// Então coloque essa letra na string resultado;
				segredo[j++] = string[i++];

				// Enquanto os próximos caracteres também forem letras, apenas avançe;
				// Dessa forma, quando encontrar um espaço, cairá no primeiro 'if' e avançará os espaços
				// Até encontrar uma letra;
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
