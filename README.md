# Project-SDA-Sistem-Antrean-Bank
## TEAM 1
NPM / NAMA 
- 2408107010010 ROZATUN NABILA
- 2408107010014 ABDAN SYAKURA BIN YASIR
- 2408107010020 HANI HURIYAH AHMAD
- 2408107010023 DEDEK SALEНА
- 2408107010038 URFAN

# Sistem Antrean Bank

## Deskripsi Singkat
Program ini merupakan sistem antrean sederhana yang digunakan dalam layanan bank.  
Fitur yang tersedia:
- Menambah nasabah ke dalam antrean.
- Memproses nasabah secara FIFO.
- Menampilkan antrean saat ini.
- Menampilkan riwayat layanan yang telah diproses.
- Undo transaksi terakhir.

## Instruksi Kompilasi dan Menjalankan Program
1. Buka terminal pada direktori proyek.
2. Kompilasi program dengan perintah:
   make
3. Jalankan program:./program
   
 ## Proses kerja program
1. Tampilan pertama akan diarahkan ke Antarmuka program 
2. Program menyediakan 6 pilihan
3. Pilihan 1 untuk menambah nasabah
4. Pilihan 2 untuk memproses nasabah
5. Pilihan 3 untuk menampilkan antrean saat ini
6. Pilihan 4 untuk menampilkan riwayat layanan
7. Pilihan 5 untuk membatalkan tranksaksi terakhir
8. Pilihan 6 untuk mengakhiri program
   
## Penjelasan Struktur Program dan Implementasi Struktur Data
- *mainfix.c*: Menyediakan menu utama dan alur eksekusi program.
- *fungsifix.c*: Berisi implementasi fungsi untuk antrean dan riwayat layanan.
- *header.h*: Menyimpan definisi struct dan deklarasi fungsi.

### Struktur Data yang Digunakan:
- struct Nasabah: Menyimpan data nama dan layanan nasabah.
- struct Antrean: Implementasi antrean menggunakan linked list (FIFO).
- struct Riwayat: Menyimpan riwayat layanan menggunakan struktur stack (LIFO).

## Kendala dan Solusi Selama Pengembangan
### Kendala:
- Terjadi kesalahan dalam proses pemilihan menu, terutama saat input tidak sesuai dengan rentang yang diharapkan.
- Input nama nasabah tidak tersimpan dengan benar akibat masalah pada buffer input.
- Nama nasabah tidak tampil dengan semestinya setelah proses input, menyebabkan data terlihat kosong saat diproses.
- Alokasi memori belum dibersihkan dengan optimal saat program keluar.
- Validasi input menu belum berjalan sempurna, sehingga input tidak valid tetap diterima dalam beberapa kondisi.

### Solusi:
- Menambahkan validasi input menu dengan pengulangan menggunakan while agar hanya menerima angka yang sesuai.
- Menggunakan scanf(" %[^\n]", nama); serta while(getchar() != '\n'); untuk memastikan input nama terbaca sempurna.
- Memastikan setiap input yang diterima dibersihkan dari sisa karakter di buffer agar tidak mengganggu input berikutnya.
- Menambahkan proses pembersihan memori dan buffer input saat keluar dari program.
- Memperbaiki alur validasi input agar program lebih tanggap terhadap input yang tidak sesuai.

## SS Output
### Setelah melewati proses kompilasi, kita akan masuk ke ANTARMUKA PROGRAM ,dan diberikan 6 pilihan
 ![Image](https://github.com/user-attachments/assets/bd039249-9331-4271-ace2-75bf5356f766)

### Pada pilihan pertama kita dapat menambahkan nasabah ,dan memilih 3 jenis layanan
 ![Image](https://github.com/user-attachments/assets/dacbdb17-153f-4c5b-ad8e-227b84bdbffe)

### Pada pilihan ke-dua program akan memproses nasabah dan akan memasukkannya kedalam riwayat
 ![Image](https://github.com/user-attachments/assets/e5eb1882-e77c-4b77-82dc-0a3a0ada636a)

### Pada pilihan ke-tiga program akan menampilkan antrean yang ada
![Image](https://github.com/user-attachments/assets/0ab65f20-7779-4080-9adb-ca17ec3dc132)

### Pada pilihan ke-empat program akan menampilkan riwayat layanan

#### Jika riwayat tidak kosong
 ![Image](https://github.com/user-attachments/assets/8567fe1b-c0c9-43d4-a823-cdcdc1c5a78d)
#### Jika riwayat kosong
 ![Image](https://github.com/user-attachments/assets/7f51e08b-211c-46ed-903a-dced790a9293)

### Pada pilihan ke-lima program akan membatalkan transaksi terakhir (undo)

#### Jika ada transaksi untuk dibatalkan
![Image](https://github.com/user-attachments/assets/98a46cc5-4172-4125-8b3b-088043c34ef1)
#### Jika tidak ada tranksaksi untuk dibatalkan
![Image](https://github.com/user-attachments/assets/d5c6d2d6-8a43-45f9-9f37-80d7ea6f3ea4)

### Pada pilihan ke-enam untuk mengakhiri program
 ![Image](https://github.com/user-attachments/assets/b01aaed7-158c-436d-967c-d216b21f0570)
 
##  Sistem Antrean Bank Sederhana Telah Selesai Dijalankan.
# Terima Kasih 





