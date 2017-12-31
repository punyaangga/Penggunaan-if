#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
	Program  	: Modul12_7.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: program menenetukan indeks nilai
*/

main(){
	//kamus
	int noHari;
	char NmHari [10];
	//algoritma
	printf("Masukan nomor hari : ");
	scanf("%d",&noHari);
	switch(noHari)
	{
		case 1 : 
		strcpy(NmHari,"Senin");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 2 : 
		strcpy(NmHari,"Selasa");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 3 : 
		strcpy(NmHari,"Rabu");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 4 : 
		strcpy(NmHari,"Kamis");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 5 : 
		strcpy(NmHari,"Jumat");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 6 : 
		strcpy(NmHari,"Sabtu");
		printf("Nama Hari= %s ",NmHari);
		break;
		case 7 : 
		strcpy(NmHari,"Minggu");
		printf("Nama Hari= %s ",NmHari);
		break;
		default:
			printf("Error");
	}
	
}
