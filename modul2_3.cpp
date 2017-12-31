#include<stdio.h>
#include<conio.h>
/*
	Program  	: Modul12_3.cpp
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
		
	if (a>b)
	{
		if(a>c)
		{
			printf("bilangan terbesar adalah %d",a);
		}
		else
		{
			printf("bilangan terbesar adalah %d",c);
		}
	}
	else
	{
		if(b>c)
		{
			printf("terbesar adalah %d",b);
		}
		else
		{
			printf("terbesar adalah %d",c);
		}
	}
	getche();
}
