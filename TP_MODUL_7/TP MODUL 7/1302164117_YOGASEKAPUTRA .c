#include<stdio.h>
#define N 5
void isi(int a[]){
    // isi semua elemen array a dengan bilangan random (nilai selalu berbeda setiap di run kembali) dari 0-9
    // gunakan prosedur srand untuk mengisi array a
    srand(time(NULL));
    int i;
    for ( i = 1 ; i <= N; i++){
       printf("masukan nilai ");
       scanf("%d",&a[i]);
        }
}

void salin(int a[],int b[]){
    int i;
    for ( i = 1; i <= N ; i++){
        b[i] = a[i];
    }
}


void cetak(int a[]){
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
        while((j>1)&&(tmp < a[j-1])){
            a[j] = a[ j - 1];
            j = j - 1;
        }
        a[j] = tmp;
    }
        for (i = 1; i<N - 1; i++){
            for(j=i+1; j<=N; j++){
                if(a[i]>a[j]){
                     tmp = a[i];
                     a[i] = a[j];
                     a[j] = tmp;

                }

            }
        }

}

void selectionSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,min,tmp;
    for(j=1; j<=N-1; j++ )
    {
        min = j;
        for (i=j+1; i<=N; i++)
        {
            if(a[i]<a[min])
                min = i;

        }
        tmp=a[min];
        a[min]=a[j];
        a[j]=tmp;
    }
}


void countingSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,k,d;
    int tabcount[100];
    int min=99999,max=-99999;

    for (i=1; i<=N; i++)
    {
        if (min > a[i]) min=a[i];
        if (max < a[i]) max=a[i];
    }

    for(i=1; i<=max; i++)
    {
        tabcount[i]=0; // isi tabcount
    }

    for(i=1; i<=N; i++)
    {
        tabcount[a[i]] =tabcount[a[i]]+1;
    }

    k=1;
    for(i=min; i<=max; i++)
    {
        if(tabcount[i] != 0)
        {
            for(j=1; j<=tabcount[i]; j++)
            {
                a[k]=i;
                k++;
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
  /*  salin(a,p);
    salin(a,q);
    salin(a,r);
    salin(a,s);
    bubbleSort(p);
    printf("Hasil Bubble Sort:\n");
    cetak(p);
    insertionSort(q);
    printf("Hasil Insertion Sort:\n");
    cetak(q);
    selectionSort(r);
    printf("Hasil Selection Sort:\n");
    cetak(r);
    countingSort(s);
    printf("Hasil Counting Sort:\n");
    cetak(s); */



    printf("\n");
    printf(" +=============================================================================================+ \n");
    printf(" | Saya mengerjakan tugas ini dengan jujur dan tidak melakukan pelanggaran aturan dari IFLAB.  | \n");
    printf(" |  Jika saya terbukti melanggar, maka saya bersedia menerima sanksi yang berlaku.             | \n");
    printf(" +=============================================================================================+ \n");

    return 0;
}
