//Buatlah program bahasa C yang dapat menghitung luas lingkaran
//dimana jika jari-jari habis dibagi 7 maka phi = 22/7, jika tidak maka phi = 3.14!

//menghitung luas lingkaran

#include <stdio.h>
int main(){
	int jari_jari;
	int Luas_Lingkaran;
	const phi = 22/7;
	const Phi = 3.14;

	printf(" Input jari_jari : ");
	scanf("%d",&jari_jari);

    if (jari_jari%7 == 0)
		printf("phi = 22/7\n");
    else
        printf("phi = 3.14\n");

Luas_Lingkaran = jari_jari*jari_jari*Phi;
printf("%d")
return 0;
}
