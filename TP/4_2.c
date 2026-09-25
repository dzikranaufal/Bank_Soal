#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char kodeVoucher[20];

    printf("Masukkan kode voucher: ");
    scanf("%s", kodeVoucher);

    if (strcmp(kodeVoucher, "HEMAT10") == 0) {
        printf("Voucher valid, diskon 10%% diterapkan!\n");
    } else {
        printf("Kode voucher tidak valid!\n");
    }
    return 0;
}