#include <stdio.h>

int primeiro(int arr[], int indice){
    int i=indice,valor=arr[indice];
    while(arr[i]==valor&&i>=0){
        i--;
    }
    if(i==0){
        return 0;
    }else{
        i++;
        return i;
    }
}

int binarySearch(int arr[], int l, int r, int x) 
{ 
   if (r >= l) 
   { 
        int mid = l + (r - l)/2; 

        if (arr[mid] == x){
            return primeiro(arr,mid); 
         }

        if (arr[mid] > x)  
            return binarySearch(arr, l, mid-1, x); 

        return binarySearch(arr, mid+1, r, x); 
   } 

   return -1; 
} 

void quick(int vet[], int esq, int dir){
    int pivo = esq, i,ch,j;         
    for(i=esq+1;i<=dir;i++){        
        j = i;                      
        if(vet[j] < vet[pivo]){     
            ch = vet[j];               
            while(j > pivo){           
                vet[j] = vet[j-1];      
                j--;                    
            }
            vet[j] = ch;               
            pivo++;                    
        }
    }
    if(pivo-1 >= esq){              
        quick(vet,esq,pivo-1);      
    }
    if(pivo+1 <= dir){              
        quick(vet,pivo+1,dir);      
    }
 }

int main()
{
    int n=1,q=1,marmores[10001],i,j,resultado,consulta,caso=0;
  scanf("%d%d",&n,&q);
    while(n!=0||q!=0){
        caso++;
        for (i = 0; i < n; ++i)
        {
            scanf("%d",&marmores[i]);
        }
        quick(marmores,0,n-1);
        printf("CASE# %d:\n", caso);
        for (i = 0; i < q; ++i)
        {
            scanf("%d",&consulta);
            resultado=binarySearch(marmores, 0, n-1, consulta);
            if(resultado==-1){
                printf("%d not found\n", consulta);
            }else{
                printf("%d found at %d\n", consulta,resultado+1);
            }
        }
    scanf("%d%d",&n,&q);

    }
    return 0;
}
