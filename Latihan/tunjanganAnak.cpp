#include<stdio.h>
#include<conio.h>

/*
	Program  	: Tunjangan Anak
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Menentukan tunjangan anak PNS
*/

main(){
	//program utama
	//deskripsi variabel
	int jAnak,gPokok,tunjangan;
	
	//input data
	printf("Masukan Jumlah Anak = ");
	scanf("%i",&jAnak);
	printf("Masukan Gaji Poko = ");
	scanf("%i",&gPokok);
	
	//proses pemberian tunjangan aanak
	if((jAnak >= 1) && (jAnak <= 3)){
		tunjangan=gPokok*jAnak*10/100;
		printf("Anak Tersebut Mendapatkan Tunjangan Sebesar Rp.%i",tunjangan);
	}else{
		tunjangan=gPokok*3*10/100;
		printf("Jumlah Anak max yang bisa mendapatkan tunjangan adalah 3 orang jadi anak anda hanya mendapat tunjangan sebesar Rp.%i",tunjangan);
	}
}
