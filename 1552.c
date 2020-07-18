/*#include <stdio.h>
int main(){

   /* Variáveis de Controle */
    int ascii[2][65];
    char palavra[1001]; 
    int aux;

    /* Recendo e testando os dados */
    while(scanf("%s",palavra) != EOF){

        /* Zerando os Vetores */
        int i,k,j,v,a;
        for( i=32;i<=96;i++){
            ascii[0][i-32] = 0;
            ascii[1][i-32] = i;
        }

        /* Colocando as letras e/ou numeros no vetor */
        for(j = 0; palavra[j] != '\0';j++){
            ascii[0][palavra[j]-32]++;
        }

        /* Ordenando */
        for ( k=0; k < 65-1; k++){
            for ( v = k+1; v < 65; v++){

                if(ascii[0][k] > ascii[0][v]){
                    aux = ascii[0][k];
                    ascii[0][k] = ascii[0][v];
                    ascii[0][v] = aux;

                    aux = ascii[1][k];
                    ascii[1][k] = ascii[1][v];
                    ascii[1][v] = aux;
                }
            }
        } 

        /* Mostrando os dados */
        for( a = 0;a<65;a++){
            if(ascii[0][a]!= 0){
                printf("%d %d\n",ascii[1][a],ascii[0][a]);
            }           
        }   
        printf("\n");           
    }

    return 0;
}*/
