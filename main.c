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

  
       switch (pilihan) {
            case 1:
                printf("\nMasukkan nama nasabah: ");
                while (getchar() != '\n'); 
                fgets(nama, sizeof(nama), stdin);
                nama[strcspn(nama, "\n")] = 0;
             
                while (1) {                
                printf("Pilih jenis layanan:\n");
                printf("  1. Setor Tunai\n");
                printf("  2. Tarik Tunai\n");
                printf("  3. Pembukaan Rekening\n");
                printf("Pilihan Anda: ");

                //Validasi input: harus angka 1-3
                if (scanf("%d", &pilihanLayanan) != 1) {
                    printf("Input tidak valid! Masukkan angka antara 1-3.\n");
                    while (getchar() != '\n'); 
                    continue; 
                }

                if (pilihanLayanan < 1 || pilihanLayanan > 3) {
                    printf("Pilihan tidak valid! Silakan pilih angka 1-3.\n");
                    while (getchar() != '\n'); 
                    continue;
                }
                while (getchar() != '\n'); // bersihkan sisa input
                break;
            }

                char layanan[30];
                switch (pilihanLayanan) {
                    case 1:
                        strcpy(layanan, "Setor Tunai");
                        break;
                    case 2:
                        strcpy(layanan, "Tarik Tunai");
                        break;
                    case 3:
                        strcpy(layanan, "Pembukaan Rekening");
                        break;
                }

                tambahNasabah(antrean, nama, layanan);
                break;

            case 2:
