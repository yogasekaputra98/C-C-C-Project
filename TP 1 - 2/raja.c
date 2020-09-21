//program mencari luas lingkarang

# include <stdio.h>
int main(){
    int jarijari;
    float luas;
    float phi ;
    printf("input jarijari : ");
    scanf("%d",&jarijari);

    if (jarijari%7 == 0) {
        phi = 22/7; }
    else { phi = 3,14;}

    luas = jarijari*jarijari*phi;
    printf("luas lingkaran = %f\n", luas);
    return 0;



}
