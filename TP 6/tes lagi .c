#include <stdio.h>

void seq(char T[], int n, int x, int *idx);

int main(){


    int n, size, i;
    size = 10;
    int pos;



    printf("masukan jumlah data : ");
    scanf("%d",&n);

    char T[n][size], x;
    for ( i = 0; i < n; i++){
        printf("masukan data ke - %d = ", i);
        scanf("%s",&T[i]);
    }
    printf("masukan data yang mau di cari : ");
    scanf("%s",&x);

    seq(T,n,x,&pos);

    if (pos == 0){
        printf(" data tidak di temukan ");
    } else
        printf("data berada pada posisi ke-%d",pos);
        return 0;

}

void seq(char T[], int n, int x, int *idx){
    int i = 0;
    while (( i < n)&&(T[i] != x)) {
        i++;
        if (T[i]==x){
            *idx = i;
            }else *idx = 0;

        if (i==1){
            *idx = 1;
        }
    }
}
