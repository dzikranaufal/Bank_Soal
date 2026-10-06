#include <stdio.h>

int main() {
    int penjualan;
    int total = 0;
    int hari = 1;

    do {
        printf("Penjualan hari ke-%d: Rp", hari);
        scanf("%d", &penjualan);

        total = total + penjualan;
        hari++;

    } while (hari <= 7);

    printf("Total penjualan selama seminggu: Rp%d", total);

    return 0;
}