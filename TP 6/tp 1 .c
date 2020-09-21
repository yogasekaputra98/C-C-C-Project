#include <stdio.h>
#include <stdbool.h>

void seq(int sort[],int n,int i,int *idx);

int main(){
    printf("mencari nilai");
    int cariX, n, sort[n], i, yo;

    printf("masukan banyak nilai : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++){
        printf("masukan data ke-%d = ",i);
        scanf("%d",&sort[i]);
    }
    printf("masukan angka yang di cari = ");
    scanf("%d",&cariX);

    printf("bilangan genap adalah = ");


    void seq(sort,n,i,yo);
     for ( i = 0; i < n; i++){
        if (sort[i] % 2 == 0){
            printf("%d", sort[i]);
        }
    return 0;
}

 void seq(int sort[],int n,int x,int *idx){
    int i;
    i = 0;
    while ((i<n)&&(sort[i]!= x)){
        i++;
        if (sort[i]==x){
            *idx = i;
            else *idx = 0;
        }
        if (i == 1){
            *idx = 1;
        }
    }

    }
 }

