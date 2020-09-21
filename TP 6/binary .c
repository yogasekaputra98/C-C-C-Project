#include <stdio.h>

void binaryS(int T[], int N, int x, int *idx);
int main(){

    int N,x,i;
    printf("masukan jumlah data : ");
    scanf("%d",&N);

    int T[N];
    int pos;



    for ( i = 0; i < N; i++){
        printf("masukan data ke - %d : ", i);
        scanf("%d",&T[i]);
    }
    printf("masukan data yang ingin di cari : ");
    scanf("%d",&x);

    binaryS(T,N,x,&pos);
    if ( pos == 0)
        printf(" data not found ");
    else
    printf("data berada pada indeks ke-%d",pos);
    return 0;

}

void binaryS(int T[],int N, int x, int *idx){
    int atas, bawah, tengah;
    int found;
    atas = 1;
    bawah = N;
    found = 0; //false
    *idx = 0;
    while ((atas <= bawah)&& (found == 0)){
        tengah = (atas + bawah) / 2;
        if (T[tengah] == x){
            found = 1;
            *idx = tengah;
        } else if ( T[tengah] < x )
            atas = tengah + 1;
          else
            bawah = tengah - 1;
    }
    }
