#include <stdio.h>
int main(){
    int n, i, j;

    printf("masukan n x n data : ");
    scanf("%d",&n);

    int mat[n][n], mab[n][n],hasil[n][n];

    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
        printf("Masukan matrik 1 = ");
        scanf("%d",&mat[i][j]);
        }
    }
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
        printf("Masukan matrik 2= ");
        scanf("%d",&mab[j][i]);
        }
    }
    for ( i = 0; i < n; i++){
        for ( j = 0; j < n; j++){
        hasil[i][j]= mat[i][j]- mab[j][i];
        printf(" %d ", hasil[i][j]);
        }
    printf("\n");
    }
    return 0;

}
