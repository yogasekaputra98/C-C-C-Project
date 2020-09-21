#include <stdio.h>

int main(){
    int a[100], i, n;
    printf(" Masukan nilai n data : ");
    scanf("%d",&n);
    for (i = 0; i < n; i++){
    printf("masukan data ke -%d\n", i);
    scanf("%d",&a[i]);
    }
    for ( i = 0; i < n; i++){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}
