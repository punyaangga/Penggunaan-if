#include<stdio.h>
#include<conio.h>
/*
	Program  	: Lama bekerja (Selisih jam kerja)
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: mencari lama jam kerja
*/
main(){
	//program utama
	//deskripsi variabel
	int jm,jk,jml;
	//input data
	printf("Aplikasi Perhitungan Lama Jam Kerja \n\n");
	printf("Masukan Jam Masuk = ");
	scanf("%d",&jm);
	printf("Masukan Jam Keluar = ");
	scanf("%d",&jk);
	//proses penentuan lama kerja
	if ((jm<=0)or(jm>=12)or(jk<=0)or(jk>=12) ){
		printf("Silakan Coba lagi angka yang boleh dimasukan 1-12");
	}
	else if (jm<jk){
		jml=jk-jm;
		printf("Lama Jam Kerja Adalah %d jam", jml);
		
	}
		else if (jm>jk){
			jml=jk-jm+12;
			printf("Lama Jam Kerja Adalah %d Jam", jml );
		}
			else{
				printf("Lama Anda bekerja adalah 0 Jam");
			}
}
