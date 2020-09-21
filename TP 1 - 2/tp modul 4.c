//Buatlah contoh program perhitungan apa saja (boleh perkalian atau pembagian)
#include <stdio.h>
// V = tegangan, i = arus , r = hambatan
int V(int i, int r){
    int D;
    D = i * r ;
    return D;
}
int main(){
    printf("Aplikasi Menghitung Tegangan Listrik\n");


    int a,b;
    printf("masukan arus = ");
    scanf("%d",&a);
    printf("masukan hambatan = ");
    scanf("%d",&b);
     printf("Tegangan = arus(i) x hambatan (r) \n");

    printf("Tegangan = %d\n", V(a,b));
    return 0;
}


