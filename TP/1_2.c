#include <stdio.h>

int main(){
    char kodeBarang[5];
    char namaBarang[] = "Beras 5kg";
    int jumlahStok;
    bool tersedia;

    printf("Masukkan kode barang (4 digit): ");
    scanf("%d", &kodeBarang);

    printf("Masukkan jumlah stok: ");
    scanf("%d", jumlahStok);

    printf("Status tersedia (1=ya, 0=tidak): ");
    scanf("%d", &tersedia);

    printf("\nKode Barang   : %d\n", kodeBarang);
    printf("Nama Barang   : %s\n", namaBarang);
    printf("Jumlah Stok   : %d unit\n", jumlahStok);
    printf("Tersedia      : %d\n", tersedia);

    return 0;
}