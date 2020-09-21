#include <stdio.h>
int main(){
    int n;
    int i;
    printf("masukan banyak data = ");
    scanf("%d",&n);

    int A[n];

    for (i=0; i<n; i++){
        printf("masukan data ke-%d = ",i);
        scanf("%d",&A[i]);
    }
    printf("bilangan genap \n= ");
     for (i=0; i<n; i++){
        if ( A[i]%2 == 0 ){
            printf(" %d ",A[i]);
        }
     }


     return 0;
}
