#include<stdio.h>
#define N 10
void isi(int a[]){
    // isi semua elemen array a dengan bilangan random (nilai selalu berbeda setiap di run kembali) dari 0-9
    // gunakan prosedur srand untuk mengisi array a

    int i;
    srand(time(NULL));
    for ( i = 1 ; i <= N; i++){
       a[i] = rand();
    }
}

void salin(int a[],int b[]){
    int i;
    for ( i = 1; i <= N ; i++){
        b[i] = a[i];
    }
}


void cetak(int a[]){
    // tampilkan semua elemen array a ke layar
    int i;
    for (i = 1; i <= N; i++){
    printf("%d ", a[i]);
    }
}
void tukar(int *a, int *b){
    int *c;
    *c = *a;
    *a = *b;
    *b = *c;
}

void bubbleSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i, j, tmp;
    for (i = N; i>= 2; i--){
        for ( j = 2; j <= i; j++){
            if (a[j - 1] > a[j]){
                tmp = a[j - 1];
                a[j - 1] = a[j];
                a[j] = tmp;

            }
        }
    }

}

void insertionSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i, j, tmp;

    for (i = 2; i <= N; i++){
        tmp = a[i];
        j = i;
        while((j > 1)&&(tmp < a[ j - 1])){
            a[j] = a[ j - 1];
            j = j - 1;
        }
        a[j] = tmp;
    }


}

void selectionSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal

    int i, j, min, tmp;
    for ( i = 1; i <= N - 1; i++){
        min = i;
        for (j = i + 1; j <= N; j++){
            if ( a[j] < a[min] ){
                min = j;
            }
            tmp = a[min];
            a[min] = a[i];
            a[i] = tmp;
        }
    }


}


void countingSort(int a[]){
    int i, j, k, d;
    int tab[100];
    int min=0 , max=N;


    for ( i = 0; i < max; i++){
        tab[i] = 0;
    }
    for(i = 1; i <= N; i++){
        tab[a[i]]=tab[a[i]]+1;

    k = 0;
    for( i = min; i < max; i++){
        if(tab[i] != 0){
            for(j = 1; j<= tab[i]; j++){
                a[k] = i;
                k++;
            }
        }
    }
}

}


int main(){
    int i,a[N],p[N],q[N],r[N],s[N];
    srand(time(NULL));
    isi(a);
    printf("Array sebelum terurut:\n");
    cetak(a);

    printf("\n \n");

    salin(a,p);
    salin(a,q);
    salin(a,r);
    salin(a,s);

    bubbleSort(p);
    printf("Hasil Bubble Sort:\n");
    cetak(p);

    printf("\n");

    insertionSort(q);
    printf("Hasil Insertion Sort:\n");
    cetak(q);


    printf("\n");
    selectionSort(r);
    printf("Hasil Selection Sort:\n");
    cetak(r);

    countingSort(s);
    printf("Hasil Counting Sort:\n");
    cetak(s);

    printf("\n");
    printf(" +=============================================================================================+ \n");
    printf(" | Saya mengerjakan tugas ini dengan jujur dan tidak melakukan pelanggaran aturan dari IFLAB.  | \n");
    printf(" |  Jika saya terbukti melanggar, maka saya bersedia menerima sanksi yang berlaku.             | \n");
    printf(" +=============================================================================================+ \n");

    return 0;
}
