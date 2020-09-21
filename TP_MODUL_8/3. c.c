#include <stdio.h>
double Rekursif(int x){
    if(x==0){
        return 0;
    }else if(x==1){
        return 0;
    }else if(x>1){
        return (1/x)+ Rekursif(x-1);
    }
}

int main (){
int x;
x = 10;
printf("%d ",Rekursif(x));

return 0;
}
