#include <stdio.h>


int main (){
int x;
x = 9;
printf("%d ",Rekursif(x));

return 0;
}
int Rekursif(int x){
    if(x<=3){
        return 1;
    }else if(x>3){
        return (x+1)*Rekursif(x-1);
    }

}
