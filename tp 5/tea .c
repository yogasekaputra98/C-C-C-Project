#include <stdio.h>
int main()
{
    int n,i,j;

    printf("Input n  = ");
    scanf("%d",&n);

    int MIN[n][n],M1[n][n],M2[n][n];

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
        printf("Masukan matrik M1 = ");
        scanf("%d",&M1[i][j]);
        }
    }
    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
        printf("Masukan matrik M2 = ");
        scanf("%d",&M2[i][j]);
        }
    }
   for (i=0; i<n; i++){
        for (j=0; j<n; j++){
        MIN[i][j]=M1[i][j]-M2[i][j];
        printf("%d   ",MIN[i][j]);
        }
    printf("\n");
    }
    return 0;
}
