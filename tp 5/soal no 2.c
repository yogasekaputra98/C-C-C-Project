
//Buatlah program menggunakan array 1D yang menyimpan bilangan inputan user sebanyak n=5, kemudian menampilakn jumlah total bilangan tersebut!

# include <stdio.h>
int main() {
    int a[100], i, n, sum;
    printf("masukan n data : ");
    scanf("%d",&n);

    for ( i = 0; i < n; i++){
        printf("masukan data ke-%d\n: ", i);
    scanf("%d",&a[i]);
    }
    sum = 0;
    for (i = 0; i < n; i++){
            sum = sum + a[i];
           }

    printf(" jumlah total = %d\n",sum);

    printf("\n");
    return 0;

    }

