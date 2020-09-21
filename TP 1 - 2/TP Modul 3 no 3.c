//program menampilkan hasil perkalian n dengan 1-10
#include <stdio.h>
int main (){
    int d;
    int a;

    printf(" Masukan n = ");
    scanf("%d",&d);
    a = 1;
    while (a <= 10){
            printf( "%d x %d = %d\n", a,d,a * d)                                                           ;

    a++ ;
}
   return 0;
}
