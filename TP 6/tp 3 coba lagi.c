//buatlah prog untk mencari nama makanan dan menampilkan apakah makanan
// ada atau tidak dan berada pada urutan berapa

#include <stdio.h>
#include <stdbool.h>
 void cek(int M[], int n, int x, int *idx);
int main(){
    int n;
    int i;
    printf("masukan banyak data = ");
    scanf("%d",&n);

    char M[n][100];

    for (i=0; i<n; i++){
        printf("masukan jenis makanan ke-%d = ",i);
        scanf("%s",&M[i]);
    }
    /*for (i=0; i<n; i++){
        printf("%s ",M[i]); */
    char x;
    printf("masukan makanan yang dicari = ");
    scanf("%s",&x);
    // indeks ke

    if (M[i] == x){
        printf("makanan ada di indeks ke -%d", i);
    } else {
        printf("makanan tidak ada di daftar");
    }

    return 0;
    }
