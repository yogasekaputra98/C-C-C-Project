#include <stdio.h>
/*
a dan b parameter formal
body fungsi
fungsi akan selalu me-return nilai setipe dengan hasil fungsinya
*/

int tambah(int a, int b){
 /* variabel local c */
 int c;
 c = a + b;
 return c;
 }

int main(){
    int x, y;
    printf("masukan nilai pertama = ");
    scanf ("%d",&x);
    printf("masukan nilai kedua = ");
    scanf ("%d",&y);
    printf("hasil penjumlahan = %d \n", tambah(x,y));
    return 0;
}
