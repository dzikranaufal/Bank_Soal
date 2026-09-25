#include <stdio.h>
#include <stdlib.h>

int main() {
    int kuota;
    int harga;

    printf("Masukkan jumlah kuota (GB): ");
    scanf("%d", &kuota);

    if (kuota <= 2) {
        harga = 15000;
    } else if (kuota <= 5) {
        harga = 30000;
    } else if (kuota <= 10) {
        harga = 50000;
    } else {
        harga = 80000;
    }

    printf("Harga paket: Rp%d\n", harga);

    return 0;
}