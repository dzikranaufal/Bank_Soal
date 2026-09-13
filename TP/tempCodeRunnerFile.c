#include <stdio.h>
#include <stdlib.h>

int main(){
    int jumlahBarang, kapasitasKardus;
    int kardusPenuh, sisaBarang;

    printf("Masukkan jumlah barang: ");
    scanf("%d", &jumlahBarang);
    printf("Masukkan kapasitas per kardus: ");
    scanf("%d", &kapasitasKardus);

    kardusPenuh = jumlahBarang / kapasitasKardus;
    sisaBarang = jumlahBarang % kapasitasKardus;

    printf("Jumlah kardus penuh = %d\n", kardusPenuh);
    printf("Sisa barang         = %d\n", sisaBarang);

    return 0;
}