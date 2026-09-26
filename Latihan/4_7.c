#include <stdio.h>
#include <stdlib.h>
int main(){
    int kode, metodeBayar, jumlahPerangkat;

    printf("Pilih paket (1=Basic, 2=Standard, 3=Premium): ");
    scanf("%d", &kode);

    switch(kode){
        case 1:
            printf("Paket Basic aktif (gratis, dengan iklan).\n");
            printf("Langganan berhasil diaktifkan.\n");
            break;
        case 2:
            printf("Harga: Rp49.000/bulan\n");
            printf("Metode pembayaran (1=kartu kredit, 2=e-wallet): ");
            scanf("%d", &metodeBayar);
            if (metodeBayar == 1 || metodeBayar == 2) {
                printf("Langganan berhasil diaktifkan.\n");
            } else {
                printf("Metode pembayaran tidak dikenali.\n");
            }
            break;
        case 3:
            printf("Harga: Rp79.000/bulan\n");
            printf("Jumlah perangkat yang didaftarkan: ");
            scanf("%d", &jumlahPerangkat);
            if (jumlahPerangkat <= 4) {
                printf("Langganan berhasil diaktifkan.\n");
            } else {
                printf("Jumlah perangkat melebihi batas maksimal.\n");
            }
            break;
        default:
            printf("Paket langganan tidak ditemukan.\n");
    }
    return 0;
}