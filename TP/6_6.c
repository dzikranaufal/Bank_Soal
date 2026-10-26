#include <stdio.h>

int main() {
    char nama[30][50];
    int tiket[30];
    int stok = 30;
    int jumlahCustomer = 0;
    int terjual = 0;
    int totalPenjualan = 0;
    int beli, i;
    char pilihan;

    while (stok > 0) {
        printf("\nNama customer: ");
        scanf(" %49[^\n]", nama[jumlahCustomer]);

        printf("Jumlah tiket yang ingin dibeli: ");
        scanf("%d", &beli);

        if (beli <= 0) {
            printf("Jumlah tiket tidak valid!\n");
        } else if (beli > stok) {
            printf("Stok tersisa %d tiket.\n", stok);
            printf("Apakah ingin membeli sisa tiket? (y/n): ");
            scanf(" %c", &pilihan);

            if (pilihan == 'y' || pilihan == 'Y') {
                beli = stok;
            } else {
                printf("Pembelian dibatalkan.\n");
                continue;
            }
        }

        if (beli > 0 && beli <= stok) {
            tiket[jumlahCustomer] = beli;
            stok = stok - beli;
            terjual = terjual + beli;
            totalPenjualan = totalPenjualan + (beli * 50000);
            jumlahCustomer++;

            printf("Pembelian berhasil!\n");
            printf("Sisa tiket: %d\n", stok);
        }
    }

    printf("\n===== REKAP PENJUALAN =====\n");
    printf("Sisa tiket: %d\n", stok);
    printf("Jumlah customer: %d\n", jumlahCustomer);
    printf("Tiket terjual: %d\n", terjual);
    printf("Total penjualan: Rp%d\n", totalPenjualan);

    printf("\n===== RINCIAN PENJUALAN =====\n");

    for (i = 0; i < jumlahCustomer; i++) {
        printf("%s: %d tiket\n", nama[i], tiket[i]);
    }

    return 0;
}