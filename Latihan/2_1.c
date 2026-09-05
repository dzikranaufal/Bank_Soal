// LATIHAN 2

// buatkan program untuk menghitung total yang harus dibayar pembeli dengan ketentuan
// Harga : 15.000
// Jumlah : 4
// Potongan : Rp 5000
// Biaya Admin : 1000

#include <stdio.h>

int main(){
    int harga = 15000, jumlah = 4, potongan = 5000, admin = 1000;
    int hasil = harga * jumlah - potongan + admin;

    printf("hasil: %d", hasil);
}