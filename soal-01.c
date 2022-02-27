/*EL2208 Praktikum Pemecahan Masalah dengan C 2021/2022
*Modul            : 3 - Pointers and Functions
*Percobaan        : -
*Hari dan Tanggal : Selasa, 1 Maret 2022
*Nama (NIM)       : -
*Asisten (NIM)    : -
*Nama File        : soal-01.c
*Deskripsi        : -
*/

#include <stdio.h>
#include <string.h>

void separate(int uang, int *sejuta, int *limaratus, int *seratus, int *limapuluh, int *duapuluh, int *sepuluh, int *lima, int *dua, int *satu, int *coin)
{
    //Uang akan dikurangi terus sampai habis
    while(uang >= 0){
        if (uang >= 1000000){
            
            uang = uang - 1000000;
            ++(*sejuta);
        }
		else if (uang >= 500000){
            
            uang = uang - 500000;
            ++(*limaratus);
        } 		
		else if (uang >= 100000){
            
            uang = uang - 100000;
            ++(*seratus);
        } 
        else if (uang >= 50000){
            uang = uang - 50000;
            ++*limapuluh;
        }
        else if (uang >= 20000){
            uang = uang - 20000;
            ++*duapuluh;
        }
        else if (uang >= 10000){
            uang = uang - 10000;
            ++*sepuluh;
        }
        else if (uang >= 5000){
            uang = uang - 5000;
            ++*lima;
        }
        else if (uang >= 2000){
            uang = uang - 2000;
            ++*dua;
        }
        else if (uang >= 1000){
            uang = uang - 1000;
            ++*satu;
        }
		else if (uang > 0){
            uang = uang - 1;
            ++*coin;
        }
        else{
            break;
        }
    }

    //Print Output
	if (*sejuta != 0){
        printf("%d lembar uang 1.000.000\n", *sejuta);
    }
	if (*limaratus != 0){
        printf("%d lembar uang 500.000\n", *limaratus);
    }
    if (*seratus != 0){
        printf("%d lembar uang 100.000\n", *seratus);
    }
    if (*limapuluh != 0){
        printf("%d lembar uang 50.000\n", *limapuluh);
    }
    if (*duapuluh != 0){
        printf("%d lembar uang 20.000\n", *duapuluh);
    }
    if (*sepuluh != 0){
        printf("%d lembar uang 10.000\n", *sepuluh);
    }
    if (*lima != 0){
        printf("%d lembar uang 5.000\n", *lima);
    }
    if (*dua != 0){
        printf("%d lembar uang 2.000\n", *dua);
    }
    if (*satu != 0){
        printf("%d lembar uang 1.000\n", *satu);
    }
	if (*coin != 0){
        printf("%d coin\n", *coin);
    }
}

int subtract(int uang, int harga){
	uang = uang - harga;
	return uang;
}

int main(){
    int inputuang;
	int hargabarang;
	int kembalian;
	
	int sejuta = 0;
	int limaratus = 0;
    int seratus = 0;
    int limapuluh = 0;
    int duapuluh = 0;
    int sepuluh = 0;
    int lima = 0;
    int dua = 0;
    int satu = 0;
	int coin = 0;
	
	printf("Program Penghitung Kembalian\n\n");
	
	
    //algoritma program utama hanya untuk menerima input uang
    printf("Masukkan Jumlah Uang : ");
    scanf("%d", &inputuang);
	
	printf("Masukkan Harga Barang : ");
    scanf("%d", &hargabarang);
	
	kembalian = subtract(inputuang, hargabarang);
	
	if(kembalian > 0){
		printf("\nKembalian anda adalah :\n");
		separate(kembalian, &sejuta, &limaratus, &seratus, &limapuluh, &duapuluh, &sepuluh, &lima, &dua, &satu, &coin);
	}
	else if(kembalian < 0){
		printf("\nUang anda tidak cukup!");
	}
	else{
		printf("\nTidak ada kembalian!");
	}
}

