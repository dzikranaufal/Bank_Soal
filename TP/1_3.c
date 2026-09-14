#include <stdio.h>

int main() {
    unsigned int jumlahPenduduk;
    unsigned int usiaBalita;

    printf("Masukkan jumlah penduduk: ");
    scanf("%u", &jumlahPenduduk);

    printf("Masukkan usia balita: ");
    scanf("%u", &usiaBalita);

    printf("\n=== Data Penduduk ===\n");
    printf("Jumlah penduduk : %u jiwa\n", jumlahPenduduk);
    printf("Usia balita     : %u tahun\n", usiaBalita);

    return 0;
}