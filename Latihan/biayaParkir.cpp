
#include<stdio.h>
#include<conio.h>
/*
	Program  	: Menentukan biaya parkir
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	:Mencari biaya parkir
*/

main(){
	int jm,jk,jml,biaya;
	
	printf("Aplikasi Perhitungan Biaya Parkir \n\n");
	printf("Masukan Jam Masuk = ");
	scanf("%d",&jm);
	printf("Masukan Jam Keluar = ");
	scanf("%d",&jk);
	
	if ((jm<=0)or(jm>=12)or(jk<=0)or(jk>=12) ){
		printf("Silakan Coba lagi angka yang boleh dimasukan 1-12");
	}
	else if (jm<jk){
		jml=jk-jm;	
	}
		else if (jm>jk){
			jml=jk-jm+12;
		}
			else{
				printf("Eror");
			}
			
			if(jml==0){
				biaya=2000;
				printf("biaya adalah %d ",biaya);
			}else{
				biaya=2000+((jml-2)*500);
				printf("Biaya adalah %d ",biaya);
			}
}
