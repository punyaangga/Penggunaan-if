#include<stdio.h>
#include<conio.h>

/*
	Program  	: Diskon barang
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: pemberian diskon barang kepada kode tertentu
*/

main()
{
	//program utama
	//dekalarasi variabel
	char jenis;
	int kode;
	float harga,diskon,total;
	
	//Pemberitahuan
	printf("Jenis barang yang mendapatkan diskon : \n");
	printf("1. Jenis A diskon sebesar 10 persen \n");
	printf("2. Jenis B diskon sebesar 15 persen \n");
	printf("3. Jenis C diskon sebesar 20 persen \n");

	
	//input data
	printf("Masukan Jenis Barang = ");
	scanf("%c",&jenis);
	printf("Masukan Harga Barang = ");
	scanf("%f",&harga);
	printf("Masukan Kode  = ");
	scanf("%i",&kode);
	
	
	//proses diskon
	if((jenis=='a')||(jenis=='A')){
		diskon=(harga*10)/100;
		total=harga-diskon;
		printf("Jenis Barang %c Mendapatkan diskon = 10 persen, Harga setelah diskon adalah %f",jenis,total);
	}
		else if((jenis=='b')||(jenis=='B')){
			diskon=(harga*15)/100;
			total=harga-diskon;
			printf("Jenis Barang %c Mendapatkan diskon = 15 persen, Harga setelah diskon adalah %f",jenis,total);
		}		
				else if((jenis=='c')||(jenis=='C')){
					diskon=(harga*20)/100;
					total=harga-diskon;
					printf("Jenis Barang %c Mendapatkan diskon = 20 persen, Harga setelah diskon adalah %f",jenis,total);
				}	
						else{
							printf("Kode Yang Anda Masukan Salah Silakan Coba Lagi");
						}
	
	getch();
	
}
