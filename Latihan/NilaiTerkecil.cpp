#include<stdio.h>
#include<conio.h>
	
/*
	Program  	: Terkecil dari 2 bilangan
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: mencari nilai terkecil
*/


main()
{
	//Program utama
	//deklarasi variabel
	int a,b;
	//input data
	printf("===Program Pencari Nilai Terbesar=== \n\n");
	printf("Masukan Nilai Pertama = ");
	scanf("%d",&a);
	printf("Masukan Nilai Kedua = ");
	scanf("%d",&b);
	//proses pemilihan
	if(a<b){	
		printf("Bilangan terkecil adalah %d",a);
		}
			else if (b<a) {
			printf("Bilangan terkecil adalah %d",b);
			}
				else{
				printf("Nilai Tidak Ada Yang Besar Dan Kecil");
				}
	}
