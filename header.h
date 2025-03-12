#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Deklarasi struktur data untuk nasabah
typedef struct Nasabah {
    char nama[50];
    char layanan[20];
    struct Nasabah* next; // Tetap menggunakan `struct Nasabah*`
} Nasabah;

// Struktur data untuk Antrean (Queue)
typedef struct {
    Nasabah* depan;  // Pointer ke nasabah di depan antrean
    Nasabah* belakang; // Pointer ke nasabah di belakang antrean
} Antrean;

// Struktur data untuk Riwayat Transaksi (Stack)
typedef struct {
    Nasabah* atas; // Pointer ke nasabah teratas di riwayat
} Riwayat;
// Deklarasi fungsi
Antrean* buatAntrean();
Riwayat* buatRiwayat();
void tambahNasabah(Antrean* antrean, char nama[], char layanan[]);
Nasabah* prosesNasabah(Antrean* antrean);
void simpanRiwayat(Riwayat* riwayat, Nasabah* nasabah);
Nasabah* ambilRiwayat(Riwayat* riwayat);
void tampilkanAntrean(Antrean* antrean);
void tampilkanRiwayat(Riwayat* riwayat);
void batalkanTransaksi(Antrean* antrean, Riwayat* riwayat);

#endif
