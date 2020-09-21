#include <stdio.h>
int tambah(int a, int b);

int main(){
    int x, y;
    printf("masukan nilai pertama = ");
    scanf ("%d",&x);
    printf("masukan nilai kedua = ");
    scanf ("%d",&y);
    printf("hasil penjumlahan = %d \n", tambah(x,y));
    return 0;
}
int tambah(int a, int b){
    int c;
    c = a + b;
    return c;
}
