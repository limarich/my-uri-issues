#include<stdio.h>

int main(){
	
	int inter, gremio, resp, i = 0, g = 0, jogos = 0;
	
	while(1){
		jogos ++;
		scanf("%d %d", &inter, &gremio);
		if (inter > gremio) i++;
		else if(gremio > inter) g++;
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d", &resp);
		if(resp == 2) break;
	}
	printf("%d grenais\nInter:%d\nGremio:%d\nEmpates:%d\n", jogos, i, g, jogos-i-g);
	if(i > g) printf("Inter venceu mais\n");
	else if(i < g) printf("Gremio venceu mais\n");
	else printf("Nao houve vencedor\n");
	return 0;
}
