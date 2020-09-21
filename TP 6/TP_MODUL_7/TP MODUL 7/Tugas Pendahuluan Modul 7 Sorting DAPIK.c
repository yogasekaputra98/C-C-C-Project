#include<stdio.h>
#define N 10
void isi(int a[]){
    // isi semua elemen array a dengan bilangan random (nilai selalu berbeda setiap di run kembali) dari 0-9
    // gunakan prosedur srand untuk mengisi array a
}
void salin(int a[],int b[]){
    // salin nilai semua elemen a ke b
}
void cetak(int a[]){
    /// tampilkan semua elemen array a ke layar
}
void tukar(int *a, int *b){
    /*
    tukar nilai a dan b
    misal a=2, b=3
    maka setelah prosedur ini dipanggil
    nilai a=3. b=2
    */
}
void bubbleSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,n,temp;
    n=N;
    do{
        temp = 0;
        for(...)
            if(a[i-1]>a[i]){
                ....  // tukar 2 nilai yang dibandingkan
                temp = i;
            }
            n = temp;
    }while(...);
}
void insertionSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,temp;
    for(...){
        temp = a[i];
        j = i-1;
        while (...){
            a[j+1] = a[j];
            ...
        }
        a[j+1] = temp;
    }
}
void selectionSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,iMin;
    for(...){
        iMin = j;
        for(...){
            if(...)
                iMin = i;
        }
        if(iMin != j)
            ... // tukar 2 nilai yang dibandingkan
    }
}
void countingSort(int a[]){
    // silahkan gunakan kerangka dibawah ini, atau dapat juga buat sendiri dari awal
    int i,j,k,d;
    int min=0,max=N;
    int tabcount[100];
    for(i=0;i<max;i++){
		
	}
        ... // isi tabcount
    for(...)
        tabcount[a[i]]=tabcount[a[i]]+1;
    k=0;
    for(...)
        if(...)
            for(j=1;j<=tabcount[i];j++){
                ...
                k++;
            }
}
int main(){
    int i,a[N],p[N],q[N],r[N],s[N];
    srand(time(NULL));
    isi(a);
    printf("Array sebelum terurut:\n");
    cetak(a);
    salin(a,p);
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
    cetak(s);
}
