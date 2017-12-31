#include<stdio.h>
#include<conio.h>
/*
	Program  	: Jam & Menit
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Menjumlahkan jam & Menit
*/

main(){
	//deklarasi
	int jam,menit;
	//input
	printf("Masukan jam (0-23) :");
	scanf("%d",&jam);
	printf("Masukan menit (0-59) : ");
	scanf("%d",&menit);
	//perhitungan	
	if(jam <0 || jam > 23 || menit <0 || menit >=60)
	{
		printf("Input salah! Coba lagi");	
	}
	else {
		menit++;
		if(menit >=60){
			jam +=1;
			menit-=60;
		}
		if(jam>=24){
			jam-=24;
		}
		printf("Setelah ditambah 1 menit menjadi %d %d",jam,menit);
	}
	
	getch();
}
