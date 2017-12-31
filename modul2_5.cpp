#include<stdio.h>
#include<conio.h>
/*
	Program  	: Modul12_5.cpp
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: program menghitung tarif pdam
*/

main (){
	//kamus data
	int pakai,a,b,c,d;
	int biaya;
	//algoritma
	printf("Masukan pemakaian air = ");
	scanf("%d",&pakai);
	a=10;
	b=0;
	c=0;
	d=0;
	
	if (pakai >30)
	{
		b=10;
		c=10;
		d=pakai-30;
	}
	else if(pakai > 20)
	{
		b=10;
		c=pakai-20;
	}
		else if(pakai > 10)
		{
			b=pakai-10;
		}
	biaya=a*2000+b*3000+c*4000+d*5000+10000;
	printf("biaya=%d",biaya);
	getche();
}

