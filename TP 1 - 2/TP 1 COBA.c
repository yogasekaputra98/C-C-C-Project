//Buatlah program bahasa C yang dapat menghitung luas lingkaran
//dimana jika jari-jari habis dibagi 7 maka phi = 22/7, jika tidak maka phi = 3.14!

//menghitung luas lingkaran

#include <stdio.h>
int main(){
	int jari_jari;
	float Luas_Lingkaran;

	printf(" Input jari_jari : ");
	scanf("%d",&jari_jari);

		if (jari_jari%7 == 0)
		printf("Phi = 22/7\n");
    else
        if (jari_jari%7 == 1)
        printf("Phi = 3.14\n");

Luas_Lingkaran = jari_jari*jari_jari*22/7;

printf("%f Luas_Lingkaran",Luas_Lingkaran);

return 0;
}
