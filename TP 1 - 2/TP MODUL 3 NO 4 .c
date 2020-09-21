//program menghitung jumlah angka bilangan bulat
#include <stdio.h>
int main(){
    int d;
    int a;
    int r = 0;

    printf("masukan angka = ");
    scanf("%d",&d);
    for ( a = 1; a <= d; a++)
{
r = r + a;
}
printf("%d\n",r);

   return 0;
}
