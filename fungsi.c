#include "header.h"

// Fungsi untuk membuat antrean baru
Antrean* buatAntrean() {
    Antrean* antrean = (Antrean*)malloc(sizeof(Antrean));
    antrean->depan = NULL;
    antrean->belakang = NULL;
    return antrean;
}

// Fungsi untuk membuat riwayat baru
Riwayat* buatRiwayat() {
    Riwayat* riwayat = (Riwayat*)malloc(sizeof(Riwayat));
    riwayat->atas = NULL;
    return riwayat;
}

// Fungsi untuk menambahkan nasabah ke antrean
void tambahNasabah(Antrean* antrean, char nama[], char layanan[]) {
    Nasabah* nasabahBaru = (Nasabah*)malloc(sizeof(Nasabah));
    strcpy(nasabahBaru->nama, nama);
    strcpy(nasabahBaru->layanan, layanan);
    nasabahBaru->next = NULL;

    if (antrean->belakang == NULL) {
        antrean->depan = antrean->belakang = nasabahBaru;
    } else {
        antrean->belakang->next = nasabahBaru;
        antrean->belakang = nasabahBaru;
    }
    printf("Nasabah %s - %s diproses.\n", nama, layanan);
}

// Fungsi untuk memproses nasabah dari antrean
Nasabah* prosesNasabah(Antrean* antrean) {
    if (antrean->depan == NULL) {
        return NULL;
    }

    Nasabah* nasabahDiproses = antrean->depan;
    antrean->depan = antrean->depan->next;

    if (antrean->depan == NULL) {
        antrean->belakang = NULL;
    }

    return nasabahDiproses;
}
