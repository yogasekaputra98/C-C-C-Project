#include <stdbool.h>
int main(){
int i, n;
char t[100][100];
char cari[100];

bool x = false;

printf("masukan banyaknya makanan = ");
scanf("%d",&n);

for (i=0; i<n; i++){
      printf("masukan makanan ke - %d = ",i);
    scanf("%s",&t[i]);
}
printf(" apa makanan yang ingin di cari = ");
scanf("%s",&cari);

i = 1;
while(( i <= n)&& (!x)){
    if (strcmp(t[i], cari)==0){
        x = true;
    }
    i++;
}
if (x){
    printf(" makanan %s ada, dan di indeks ke - %d \n", cari, i-1 );
} else {
    printf("%s tidak ada di daftar makanan \n", cari);

}
return 0;
}
