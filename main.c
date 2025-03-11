#include "header.h"

int main() {
    Antrean* antrean = buatAntrean();
    Riwayat* riwayat = buatRiwayat();
    int pilihan;
    char nama[50];
    int pilihanLayanan;

    do {
        printf("\n+---------------------------------------+\n");
        printf("|        SISTEM ANTREAN BANK            |\n");
        printf("+---------------------------------------+\n");
        printf("| 1. Tambah Nasabah ke Antrean          |\n");
        printf("| 2. Proses Nasabah                     |\n");
        printf("| 3. Tampilkan Antrean Saat Ini         |\n");
        printf("| 4. Tampilkan Riwayat Layanan          |\n");
        printf("| 5. Batalkan Transaksi Terakhir (Undo) |\n");
        printf("| 6. Keluar                             |\n");
        printf("+---------------------------------------+\n");
        printf("Pilihan Anda: ");

        //Validasi input: harus angka 1-6
        if (scanf("%d", &pilihan) != 1) {
            printf("Input tidak valid! Masukkan angka antara 1-6.\n");
            while (getchar() != '\n'); 
            continue; 
        }

        if (pilihan < 1 || pilihan > 6) {
            printf("Pilihan tidak valid! Silakan pilih angka 1-6.\n");
            while (getchar() != '\n'); 
            continue;
        }

  
