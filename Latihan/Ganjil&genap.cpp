#include<stdio.h>
#include<conio.h>

/*
	Program  	: Mencari Bilangan Ganjil & Genap
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: menentukan bilangan ganjil dan genap
*/
main()
{
	//Program utama
	//Deklarasi variabel
	int a;
	//input
	printf("===Program Pencari Bilangan Genap Ganjil=== \n\n");
	printf("Masukan Bilangan = ");
	scanf("%d",&a);
	//proses
	if(a%2==0){
		printf("%d",a);
		printf(" Adalah Bilangan Genap"); 
	}else {
		printf("%d",a);
		printf(" Adalah Bilangan Ganjil");
	}
}
