#include <stdio.h>

int main(){
int n=10;
printf("Ngoding itu asyik");
printf("%d",FungsiRekursif(n));
return 0; }

int FungsiRekursif(int n){
    if(n==0){
        return 0;
    }else if(n==1){
        return 1;
    }else if(n>1){
        return n*FungsiRekursif(n-1);
    }
}
