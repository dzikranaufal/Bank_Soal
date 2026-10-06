#include <stdio.h>

int main() {
    int saldo = 1000000;
    int penarikan;

    do {
        printf("Masukkan nominal penarikan: Rp");
        scanf("%d", &penarikan);

        if (penarikan > saldo) {
            printf("Saldo tidak cukup!\n");
        }

    } while (penarikan > saldo);

    saldo = saldo - penarikan;

    printf("Sisa saldo: Rp%d", saldo);

    return 0;
}