#include<stdio.h>
#include<conio.h>
/*
	Program  	: Modul12_6.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: program menenetukan indeks nilai
*/

main (){
	//kamus
	int uts,uas,tugas,abs;
	float nas;
	char indeks;
	//algoritma
	printf("Masukan nilai UTS = ");
	scanf("%d",&uts);
	printf("Masukan nilai UAS = ");
	scanf("%d",&uas);
	printf("Masukan nilai Tugas = ");
	scanf("%d",&tugas);
	printf("Masukan nilai Kehadiran = ");
	scanf("%d",&abs);	
	
	nas=0.3*uts+0.4*uas+0.2*tugas+0.1*abs;
	
	if(nas>=85)
		indeks='A';
	else if(nas>=70)
		indeks='B';
	else if(nas>=55)
		indeks='C';
	else if(nas>=40)
		indeks='D';
	else{
			indeks='E';
	}
	printf("Indeks nilai = %c",indeks);
	getche();
}
