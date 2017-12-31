#include<stdio.h>
#include<conio.h>


/*
	Program  	: Gaji Karyawan Mingguan
	Autohor   	: <<3411171142>>,<<Angga Faniya Hermawan>>
	Tanggal   	: 09-Oktober-2017
	Deskripsi 	: Menentukan gaji karyawan 
*/

main(){
	//program utama
	//deklarasi variabel
	int waktu,gol,gaji,lembur;
	//input
	printf("Program Penentu Gaji Karyawan Dalam Skala Mingguan \n\n");
	printf("Masukan Golongan Kerja 1-4 = ");
	scanf("%i",&gol);
	printf("Masukan Lama Jam Kerja = ");
	scanf("%i",&waktu);
	
	if((gol==1)&&(waktu<=40)){
		gaji=waktu*3000;
		printf("Upah anda sebesar = %i",gaji);
	}else if ((gol==1)&&(waktu>40)){
		lembur=3000*1.5;
		gaji=3000*40+((waktu-40)*lembur);
		printf("Upah anda sebesar = %i",gaji);
	}
		else if((gol==2)&&(waktu<=40)){
			gaji=waktu*3500;
			printf("Upah anda sebesar = %i",gaji);
		}
			else if((gol==2)&&(waktu>40)){
				lembur=3500*1.5;
				gaji=3500*40+((waktu-40)*lembur);
				printf("Upah anda sebesar = %i",gaji);
			}
				else if((gol==3)&&(waktu<=40)){
					gaji=waktu*4000;
					printf("Upah anda sebesar = %i",gaji);
				}
					else if((gol==3)&&(waktu>40)){
						lembur=4000*1.5;
						gaji=4000*40+((waktu-40)*lembur);
						printf("Upah anda sebesar = %i",gaji);
					}
						else if((gol==4)&&(waktu<=40)){
							gaji=waktu*5000;
							printf("Upah anda sebesar = %i",gaji);
						}
							else if((gol==4)&&(waktu>40)){
								lembur=5000*1.5;
								gaji=5000*40+((waktu-40)*lembur);
								printf("Upah anda sebesar = %i",gaji);
							}
								else{
									printf("Maaf Golongan anda tidak terdaftar silakan coba lagi");
								}
							
getche();
}

