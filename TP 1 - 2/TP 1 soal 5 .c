# include <stdio.h>
int main(){
    int jarijari;
    float LuasLingkaran;
    float Phi ;
    printf("input jarijari : ");
    scanf("%d",&jarijari);

    if (jarijari%7 == 0) {
        	Phi = 22.0/7;
}
else {
Phi = 3.14;
}

    LuasLingkaran = jarijari*jarijari*Phi;
    printf("luas lingkaran = %f\n", LuasLingkaran);
    return 0;
}
