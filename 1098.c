#include<stdio.h>

/*if(i - (int)i == 0)*/
/*int main()
{
	float i = 0, j = 1;
	int c = 1;
	
	while(i <= 2.2){

		if(i - (int) i == 0 ||j - (int) j == 0 || c == 31)
			printf("I=%d J=%d\n", (int)i, (int)j);
		else
			printf("I=%.1f J=%.1f\n", i, j);
		
		if(c % 3 == 0)
		{
			i += 0.2;
			j = i;
		}	
		c++;
		j++;

	}
	
	return 0;
}*/
#include <stdio.h>

int main() {
    int c = 0;
    float i = 0, j = 1;

    while (c <= 32) {
        if (c < 3 || c >= 15 && c <= 17 || c >= 30)
            printf("I=%i J=%i\n", (int)i, (int)j);
        else
            printf("I=%.1f J=%.1f\n", i, j);
        c++, j++;
        if (c % 3 == 0)
            i += 0.2, j = 1 + i;
    }

    return 0;
}
