#include <stdio.h>
#include <stdlib.h>
int main(){
    float lamaKerja, pencapaian;

    printf("Masukkan lama kerja (tahun): ");
    scanf("%f", &lamaKerja);

    if (lamaKerja > 1) {
        printf("Masukkan pencapaian target penjualan (%%): ");
        scanf("%f", &pencapaian);
        if (pencapaian >= 120) {
            printf("Bonus: 2x gaji pokok\n");
        } else if (pencapaian >= 100) {
            printf("Bonus: 1x gaji pokok\n");
        } else {
            printf("Bonus: Tidak ada bonus\n");
        }
    } else {
        printf("Belum memenuhi syarat masa kerja untuk bonus.\n");
    }
    return 0;
}