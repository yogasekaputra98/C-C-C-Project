#include <stdio.h>
int Rekursif(int n);
int main(){
    int n = 5;
        printf("Fungsi f(x) = ");
        printf("%d",Rekursif(n));
        return 0;
}

int Rekursif(int n){
    if(n==0){
        return 4;
    }else if(n==1){
        return 5;
    }else if(n>1){
        return (2*Rekursif(n - 1)) + (5*Rekursif(n - 2)) + 10;
    }
}
