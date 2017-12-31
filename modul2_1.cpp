#include<stdio.h>
#include<conio.h>

/*
	Program  	: Modul12_1.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Program menentukan bilangan positif negatif
*/

main(){
		//kamus data
		int bil;
		//algoritma
		printf("Masukan bilangan ");
		scanf ("%d",&bil);
		if (bil>=0)
		{
			printf("Bilangan positif");
		}
		else
		{
			printf("Bilangan adalah negatif");
		}
		
		getch();
}
