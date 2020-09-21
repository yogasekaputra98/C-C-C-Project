# include <stdio.h>
#include <stdbool.h>

int main(){
    int n, i;
    printf("masukan banyak data = ");
    scanf("%d",&n);

    char arr[n];
    for (i=0; i<n; i++){
       printf("masukan makanan ke - %d = ",i);
    scanf("%s",&arr[i]);
    }

    // mencari nilai tertentu di array
    char x;
    printf("masukan makanan yang dicari : ");
    scanf("%s",&x);

    i = 0;
    bool ketemu = false;

    while ((i<n)&&(!ketemu)){
    if(arr[i] == x){
        ketemu = true;
    }
    i++;
    }
    if (ketemu){
    printf("makanan yang dicari ada di indeks ke - %d ",i - 1);
    }else {
    printf("makanan yang dicari tidak ada ");
    }

return 0;
}
