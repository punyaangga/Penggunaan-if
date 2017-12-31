#include<stdio.h>
#include<conio.h>
	
/*
	Program  	: Terbesar dari 2 bilangan
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: mencari nilai terbesar
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
	if(a>b){	
		printf("Bilangan terbesar adalah %d",a);
		}
			else if (b>a) {
			printf("Bilangan terbesar adalah %d",b);
			}
				else{
				printf("Nilai Tidak Ada Yang Besar Dan Kecil");
				}
	}
