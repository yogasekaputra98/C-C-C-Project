#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//INSIALISASI VARIABEL
int max_number = 10;
int minimum_number = -10;
int x1,x2,x1b,x2b,BSFar[2],i,r;
double Eo,Ebest,DeltaE,Ebaru,P,T;
double HitungEnergi(int x1,int x2);

int main(){
printf("##################\n");
printf("SIMULATED ANNALING\n");
printf("##################\n\n");
// INPUT NILAI SUHU AWAL
printf("SUHU AWAL = ");
scanf("%lf",&T);
// GENERATE NILAI X1 DAN X2
srand(time(NULL));
x1 = rand() % (max_number + 1 - minimum_number) + minimum_number;
x2 = rand() % (max_number + 1 - minimum_number) + minimum_number;
printf("TITIK AWAL \nX1 = %d\tX2 = %d\n",x1,x2);
//HITUNG ENERGI AWAL
printf("NILAI Eo = %lf\n",HitungEnergi(x1,x2));
Eo = HitungEnergi(x1,x2);
Ebest = Eo;
i = 0;
//INPUT NILAI X1 X2 MENJADI BEST SO FAR
BSFar[0] = x1;
BSFar[1] = x2;
//INPUT NILAI X1 X2 MENJADI X1B DAN X2B AWAL
x1b = x1;
x2b = x2;
printf("\nTITIK BARU\n");
while(i<T){
    /*GENERATE NILAI X1B DAN X2B DENGAN MELAKUKAN
    PERGESERAN TITIK SECARA LOOPING, DENGAN BATAS
    PERGESERAN -2 SAMPAI DENGAN 2
    */
    x1b = x1b + (rand() % (2 + 1 - (-2)) + (-2));
    x2b = x2b + (rand() % (2 + 1 - (-2)) + (-2));
    printf("X1_baru = %d\tX2_baru = %d\t",x1b,x2b);
    // MENGHITUNG NILAI ENERGI DARI TITIK X1B DAN X2B
    Ebaru = HitungEnergi(x1b,x2b);
    printf("Energi Titik Baru = %lf\t",Ebaru);
    //MENGHITUNG DELTA ENERGI
    DeltaE = Ebaru - Eo;
    printf("Delta E = %lf\n\n",DeltaE);
    if(DeltaE < 0){
        x1 = x1b;
        x2 = x2b;
        Eo = Ebaru;
        if(Ebaru < Ebest){
            BSFar[0] = x1;
            BSFar[1] = x2;
            Ebest = Eo;
        }
    }else if (DeltaE > 0){
        P = exp((-DeltaE)/T);//MENGHITUNG PROBABILITAS
        r = (rand() % (1 + 1 - (0)) + (0));
        if(r<P){
            x1 = x1b;
            x2 = x2b;
            Eo = Ebaru;
        }
    }
    T = T*0.9 ;
    i++;
}
printf("Best So Far X1 = %d dan\t X2 = %d\n",BSFar[0],BSFar[1]);
printf("Energy Ebest = %lf",Ebest);
return 0;
}
// FUNGSI MENGHITUNG NILAI ENERGI
double HitungEnergi(int x1,int x2){
    double A,B,C,D,nilaisin,nilaicos;
    nilaisin = sin(x1);
    nilaicos = cos(x2);
    A = nilaisin * nilaicos ;
    B = 1 - sqrt(pow(x1,2) + pow(x2,2));
    C = (0.80)*exp(B);
    D = -(A+C);
    return D;
}
