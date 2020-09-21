//Buatlah contoh program perhitungan apa saja (boleh perkalian atau pembagian)
//program menghitung luas
#include <stdio.h>
// header fungsi harus di taruh sebelum main
int luas (int p, int l);
int keliling ( int p, int l);

int main (){
    printf("latihan membuat fungsi\n");
    int panjang, lebar;
    int l,k;
    int a ;
    int b ;

    printf("masukan nilai pertama = ");
    scanf ("%d",&a);
    printf("masukan nilai kedua = ");
    scanf ("%d",&b);

    printf("panjang = %d\n", panjang);
    printf("Lebar = %d\n", lebar);

    l = luas (a,b);
    printf("fungsi luas = %d\n",l);
    k = keliling (a,b);
    printf ("fungsi keliling = %d\n", k);
    return 0;
}

//Body fungsi
int luas (int p, int l){
    return p * l;
}
int keliling(int p, int l){
    return 2 * (p + l);
}

