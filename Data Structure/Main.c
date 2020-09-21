#include "Body.c"

int main(){
    long long int totalOnGoingHarga=0;//Inisialisasi Total Harga Berjalan = 0
	Queue BarangPelanggan;//Inisialisasi Antrian Barang Belanjaan Pelanggan
	Queue DatabaseBarang;//Inisialisasi Antrian Database Barang
	Queue DatabaseMember;//Inisialisasi Antrian Database Member
	List L;
	createEmpty(&BarangPelanggan);//Membuat Antrian Barang Belanjaan Pelanggan
	createEmpty(&DatabaseBarang);//Membuat Antrian Database Barang
	createEmpty(&DatabaseMember);//Membuat Antrian Database Member
	createEmpty(&L);

    address1 p0 = alokasip(118129990,"Joni ( Admin)");
    address1 p1 = alokasip(118129989,"RAFAEL");
    address1 p2 = alokasip(118129988,"EZI");
    address1 p3 = alokasip(118129987,"NANDA ");
    address1 p4 = alokasip(118129986,"ESSA");
    insertFirst(&L,p0);
    insertLast(&L,p1);
    insertLast(&L,p2);
    insertLast(&L,p3);
    insertLast(&L,p4);

    databaseBarang(&DatabaseBarang);//Memanggil Isi Database Barang
    databaseMember(&DatabaseMember);//Memanggil Isi Database Member
    menu(DatabaseBarang,DatabaseMember,BarangPelanggan,totalOnGoingHarga,L);//Masuk Ke Menu Utama
    return 0;
}
