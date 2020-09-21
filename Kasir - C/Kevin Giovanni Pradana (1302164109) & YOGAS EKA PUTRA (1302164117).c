#include <stdio.h>
#include <time.h>
#include <stdlib.h>

typedef struct{
    char nama[15][100];
    int harga;
    int jumlah;
    int total;
    float discount;
} barang;
typedef struct{
    int cash, change;
    barang slot1;
}Konsumen;

char title();
void isi( barang ben[], int n);
void selectionsort(int n, int tab[]);
int hitungtotal(barang item[],int N);
int hasildiscount(int A,barang dis);
void cetak(barang ben[],int total, int size ,Konsumen Mo);


void saldolistrik();
void saldoprovider();
void games();

int start();
void password();

int main(){
    printf("\n\t\t\t\t*****************************************************\t\t\t\t\n");
    printf("\n\t\t\t\t********** PROGRAM KASIR YOGAS DAN KEVIN ************\t\t\t\t\n");
    printf("\n\t\t\t\t***************     CS - 40 - 01    *****************\t\t\t\t\n");
    printf("\n\t\t\t\t********************            *********************\t\t\t\t\n");
    printf("\n\t\t\t\t***********************      ************************\t\t\t\t\n");
    printf("\n\t\t\t\t*************************  **************************\t\t\t\t\n");
    printf("\n\t\t\t\t*****************************************************\t\t\t\t\n");

    system("pause");
    system("cls");
    password();
}

void password(){
    char code;
    int i, j;
    printf("PASSWORD\n");
    printf("WHO I AM ? \n");
    scanf("%c",&code);

    if ( code == 'R' || code == 'G'){
        system("cls");
        return start();
    }else{
        for ( i = 0; i < 5; i++){
           for (j = 0; j <5 ; j++){
            printf("\t**WHO ARE YOU**\t");
           }
           printf("\n"); printf("\n");
        }
        system("pause");
        system("cls");
        return 0;
    }
}

void kasir(){
    printf("\t\tKASIR MART\n");
    printf("********************\n");
    int size,i, sum, B,A;
    printf("MASUKAN JUMLAH BARANG = ");
    scanf("%d",&size);
    barang ben[size], dis;
    Konsumen Mo;
    srand(time(NULL));
    isi( ben, size);
    hitungtotal(ben,size);
    A = hasildiscount(hitungtotal(ben,size),dis);

    if ( hitungtotal(ben,size) > 100000 && hitungtotal(ben,size) < 250000){
     printf("MENDAPATKAN BONUS PIRING CANTIK DAN POTONGAN HARGA 10 PERSEN \n");
    } else if ( hitungtotal(ben,size) >= 250000 ){
      printf("MENDAPATKAN BONUS PIRING CANTIK\nVOUCHER BELANJA Rp.50000 DAN POTONGAN HARGA 20 PERSEN \n");
    }

    printf("***TOTAL = Rp.%d\n",A);
    printf("\n");

    printf("CASH =Rp. ");
    scanf("%d",&Mo.cash);

    Mo.change = Mo.cash - A ;
    printf("CHANGE = %d\n",Mo.change);

    selectionsort(size,ben);
    system("cls");

    cetak(ben,A, size ,Mo);
    //NOTA
     FILE *f = fopen("kasir .txt", "w");
    if ( f == NULL ){
        printf("tidak bisa membuat file \n");
        exit(1);
    }
    fprintf(f,"                                                                      STRUCT CODE = #%d            \n",rand()%100);
    fprintf(f,"***************************************************************************************************\n");
    fprintf(f,"|                                           KASIR TUBES                                           |\n");
    fprintf(f,"|                                       TELKOM UNIVERSITY                                         |\n");
    fprintf(f,"|                                  COMPUTATIONAL DATA SCIENCE                                     |\n");
    fprintf(f,"***************************************************************************************************\n");
    fprintf(f,"***************************************************************************************************\n");
    fprintf(f,"         Nama Barang    |     Harga Satuan   | Jumlah Yang Di Beli   |             Total           \n");
    fprintf(f,"***************************************************************************************************\n");
    for( i = 0; i < size; i++){
    fprintf(f,"|%s\t\t\t|%d\t\t\t|%d\t\t\t|%d\t\t\t|\n", ben[i].nama[i], ben[i].harga, ben[i].jumlah, ben[i].harga * ben[i].jumlah);
        }
    fprintf(f,"***************************************************************************************************\n");
    fprintf(f,"|                                                                                ***TOTAL   =  %d \n", A );
    fprintf(f,"|                                                                                    CASH   =  %d \n", Mo.cash);
    fprintf(f,"|                                                                                  CHANGE   =  %d \n", Mo.change);
    fprintf(f,"***************************************************************************************************\n");
    fprintf(f,"|                                        TERIMA KASIH                                             |\n");
    fprintf(f,"|                                  SELAMAT DATANG KEMBALI                                         |\n");
    fprintf(f,"***************************************************************************************************\n");

    system("pause");
    system("cls");

    return start();
}
//TITLE
char title (){
    printf("===============================\n");
    printf("|        KASIR TUBES          |\n");
    printf("|    TELKOM UNIVERSITY        |\n");
    printf("|COMPUTATIONAL DATA SCIENCE   |\n");
    printf("-------------------------------\n");
    time_t lt;
    lt = time(NULL);
    printf(ctime(&lt));
    printf("===============================\n");
}
//INPUTAN BARANG
void isi( barang ben[], int n){
    int i;
    printf("MASUKAN BARANG\n");
    printf("++++++++++++++\n");
    for ( i = 0; i < n; i++){

        printf("NAMA BARANG = ");
        scanf("%s",&ben[i].nama[i]);
        printf("HARGA SATUAN = Rp.");
        scanf("%d",&ben[i].harga);
        printf("BANYAK = ");
        scanf("%d",&ben[i].jumlah);
        printf("\t\t\tTOTAL =Rp.%d\n",ben[i].harga * ben[i].jumlah);
        printf("\n");
    }
}
//HITUNG TOTAL BAYAR
int hitungtotal(barang item[],int N){
    int i, pro = 0;

    for (i = 0; i < N; i++){
        pro = pro + item[i].harga * item[i].jumlah;
    }
    return pro;`
}
//DISCOUNT
int hasildiscount(int A,barang dis){
    if ( A > 100000 && A < 250000){
        return dis.total = (A -  ( A * 0.1 )) + 1;
    } else if ( A >= 250000 ){
        return dis.total = (A - ( A * 0.2 )) + 1;
    }else {
        return dis.total = A;
    }
}
//CETAK HASIL
void cetak(barang ben[],int total, int size ,Konsumen Mo){
    int i;
    printf("                                                                      STRUCT CODE = #%d            \n",rand()%100);
    printf("***************************************************************************************************\n");
    printf("|                                           KASIR TUBES                                           |\n");
    printf("|                                       TELKOM UNIVERSITY                                         |\n");
    printf("|                                  COMPUTATIONAL DATA SCIENCE                                     |\n");
    printf("***************************************************************************************************\n");
    time_t lt;
    lt = time(NULL);
    printf(ctime(&lt));
    printf("***************************************************************************************************\n");
    printf("|NO|         Nama Barang    |     Harga Satuan   | Jumlah Yang Di Beli   |             Total      |\n");
    printf("***************************************************************************************************\n");
    for( i = 0; i < size; i++){
    printf("|%d |%s                       %d                  %d                       %d                     \n",i + 1, ben[i].nama[i], ben[i].harga, ben[i].jumlah, ben[i].harga * ben[i].jumlah);
        }
    printf("***************************************************************************************************\n");
    printf("|                                                                                ***TOTAL  =Rp.%d \n",total);
    printf("|                                                                                   CASH   =Rp.%d \n", Mo.cash);
    printf("|                                                                                 CHANGE   =Rp.%d \n", Mo.change);
    printf("***************************************************************************************************\n");
}

void saldolistrik(){
    srand(time(NULL));

    int i, j, k, a,n;

    printf("KASIR SALDO LISTRIK\n");
    printf("*******************\n");
    printf("NOMOR METERAN = ");
    scanf("%d",&k);
    printf("BELI    =Rp. ");
    scanf("%d",&n);
    printf("TOTAL   =Rp. %d \n",n + 2500);
    printf("CASH    =Rp. ");
    scanf("%d",&a);

    system("cls");
    printf("**********************************************\n");
    printf("NOMOR METERAN = %d \n",k);
    printf("TOKEN = %d - %d - %d - %d \n",rand()%100, rand()%100,rand()%100,rand()%100);
    printf("BANYAK TOKEN = %d \n",n / 56);
    printf("**********************************************\n");
    printf("TOTAL   =Rp. %d \n",n + 2500);
    printf("CASH    =Rp. %d \n",a);
    printf("CHANGE  =Rp. %d\n",a - (n + 2500));
    printf("**********************************************\n");
    system("pause");
    system("cls");
    return start();
}
void saldoprovider(){
    int sum,  n, i;
    int provider;

    printf("KASIR SALDO PROVIDER\n");
    printf("*******************\n");
    printf("NOMOR PONSEL = ");
    scanf("%d",&i);
    printf("BELi = ");
    scanf("%d",&n);
    printf("PROVIDER\n");
    printf(" 1. TELKOMSEL \n 2. INDOSAT \n 3. SMARTFREN \n 4. XL \n 5. TRII \n 6. AXIS \n");
    scanf("%d",&provider);

    if ( n >= 100000 ){
        sum = n;
    } else if ( n >= 50000 && n < 100000){
        sum = n + 1000;
    } else {
        sum = n + 2000;
    }
    system("cls");
    printf("******************************\n");
    printf("\n");
    if (provider == 1 ){
        printf("\tTELKOMSEL\n");
    }else if( provider == 2){
        printf("\tINDOSAT\n");
    }else if( provider == 3){
        printf("\tSMARTFREN\n");
    }else if( provider == 4){
        printf("\tXL\n");
    }else if( provider == 5){
        printf("\tTRII\n");
    }else if( provider == 6){
        printf("\tAXIS\n");
    }
    printf("\tBELI    =Rp. %d\n",n);
    printf("\tTOTAL   =Rp. %d\n",sum);
    printf("******************************\n");
    system("pause");
    system("cls");
    return start();
    }
void games(){
    srand(time(NULL));
    int token, total, beli;
    char vouc[100][100];

    printf("KASIR VOUCHER GAMES\n");
    printf("*******************\n");
    printf("GAME = ");
    scanf("%s",&vouc);
    printf("BELI = ");
    scanf("%d",&beli);

    if ( vouc == "PB" || vouc == "pb" ){
        token = rand()%200;
    } else if ( vouc == "CS" || vouc == "cs" ){
        token = rand()%100;
    }else if ( vouc == "STEAM" || vouc == "STEAM" ){
        token = rand()%50;
    }else {
    printf(" GAMES TIDAK TERSEDIA \n");
    }
    system("cls");
    printf("*******************************\n");
    printf("GAME %s\n",vouc);
    printf("BELI %d\n",beli);
    printf("TOKEN\t\t\t\t #*%d@YOGASKEVIN\n",token);
    printf("TOTAL \t\t %d\n",beli + 2500);
    printf("*******************************\n");

    system("pause");
    system("cls");
    return start();
}
int start(){
    int i, pilih;
    title();
    printf("1. SALDO LISTRIK \n");
    printf("2. GAMES          \n");
    printf("3. SALDO PROVIDER  \n");
    printf("4. KASIR          \n");
    printf("MASUKAN PILIHAN = ");
    scanf("%d",&pilih);
    system("cls");
    switch(pilih){
        case 1: saldolistrik();break;
        case 2: games();break;
        case 3: saldoprovider();break;
        case 4: kasir();break;
        default: puts("\n\t\t\tSalah memasukan pilihan");printf("\t\t\t");system("pause");system("cls");return start();
    }
}
