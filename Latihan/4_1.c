#include <stdio.h>
#include <stdlib.h>
int main(){
    float liter;
    printf("Masukkan jumlah liter BBM: ");
    scanf("%f", &liter);

    if (liter >= 50) {
        printf("Selamat, Anda mendapat voucher cuci mobil gratis!\n");
    }
    return 0;
}