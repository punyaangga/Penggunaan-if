#include<stdio.h>
#include<conio.h>
/*
	Program  	: Modul12_4.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: program menentukan terbesar 3 bilangan
*/
main (){
	//kamus
	int a,b,c;
	//algoritma
	printf ("Masukan Bilangan pertama = ");
	scanf("%d",&a);
	printf ("Masukan Bilangan kedua = ");
	scanf("%d",&b);
	printf ("Masukan Bilangan ketiga = ");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("Bilangan terbesar adalah %d ",a);	
	}
	else if(b>a&&b>c)
	{
		printf("Bilangan terbesar adalah %d",b);
	}
	else
	{
		printf("Bilangan terbesar adalah %d",c);
	}
	getche();
}
