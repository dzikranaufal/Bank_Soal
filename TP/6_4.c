#include <stdio.h>

int main() {
    int hari[100];
    int n, i;
    int total = 0;
    int terbanyak;
    int hariTerbanyak = 1;

    printf("Masukkan jumlah hari (maksimal 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Jumlah hari tidak valid!");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Buku dipinjam hari ke-%d: ", i + 1);
        scanf("%d", &hari[i]);

        total = total + hari[i];
    }

    terbanyak = hari[0];

    for (i = 1; i < n; i++) {
        if (hari[i] > terbanyak) {
            terbanyak = hari[i];
            hariTerbanyak = i + 1;
        }
    }

    printf("\nTotal buku dipinjam: %d\n", total);
    printf("Peminjaman terbanyak: %d buku\n", terbanyak);
    printf("Terjadi pada hari ke-%d\n", hariTerbanyak);

    return 0;
}