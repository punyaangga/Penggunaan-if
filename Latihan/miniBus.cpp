#include<stdio.h>
#include<conio.h>

/*
	Program  	: Mini bus pariwisata
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Menentukan jumlah bus
*/

main(){
	//program utama
	//deklarasi variabel
	int iPeserta,iMinibus;
	
	//input data
    printf("Masukkan jumlah peserta : ");
    scanf("%d",&iPeserta);
    iMinibus=0;
    
    //proses penetuan jumlah bus
    if (iPeserta > 7){
        iMinibus = iPeserta / 7;
        if (iPeserta % 7 != 0)
           iMinibus++;
    }else if (iPeserta > 0)
        iMinibus=1;
    	printf("Minibus yg diperlukan: %d",iMinibus);


getch();
}
