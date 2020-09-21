# include <stdio.h>
int main(){
    int Panjang;
    int Lebar;
    int Luas;

    printf("Input Panjang : ");
    scanf("%d",&Panjang);
    printf("Input Lebar : ");
    scanf("%d",&Lebar);


    Luas = Panjang*Lebar;

    printf("%d Luas\n", Luas);

    return 0;

}
