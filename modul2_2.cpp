#include<stdio.h>
#include<conio.h>
#include<string.h>
/*
	Program  	: Modul12_2.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Program menentukan bilangan positif negatif
*/
main (){
	//kamus data
	int bil;
	char ket[10];
	//algoritma
	printf("Masukan bilangan = ");
	scanf("$d",&bil);
	strcpy(ket,"positip");
	if(bil<0)
	{
		strcpy(ket,"negatip");
	}
	printf("bilangan adalah %s",ket);
	getche();
}

