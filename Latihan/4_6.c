#include <stdio.h>
#include <stdlib.h>
int main(){
    char kode;
    int jumlah;
    int harga, total;

    printf("Pilih kode combo (A/B/C): ");
    scanf(" %c", &kode);

    switch(kode){
        case 'A':
            harga = 28000;
            printf("Masukkan jumlah paket: ");
            scanf("%d", &jumlah);
            total = harga * jumlah;
            printf("Total harga: Rp%d\n", total);
            break;
        case 'B':
            harga = 25000;
            printf("Masukkan jumlah paket: ");
            scanf("%d", &jumlah);
            total = harga * jumlah;
            printf("Total harga: Rp%d\n", total);
            break;
        case 'C':
            harga = 22000;
            printf("Masukkan jumlah paket: ");
            scanf("%d", &jumlah);
            total = harga * jumlah;
            printf("Total harga: Rp%d\n", total);
            break;
        default:
            printf("Combo tidak ditemukan.\n");
    }
    return 0;
}