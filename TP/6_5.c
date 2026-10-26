#include <stdio.h>

int main() {
    int penjualan[100];
    int n, i;
    int total = 0;
    int jumlahHari = 0;
    float rataRata;

    printf("Masukkan jumlah hari (maksimal 100): ");
    scanf("%d", &n);

    if (n < 1 || n > 100) {
        printf("Jumlah hari tidak valid!");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Penjualan hari ke-%d: ", i + 1);
        scanf("%d", &penjualan[i]);

        total = total + penjualan[i];
    }

    rataRata = (float) total / n;

    for (i = 0; i < n; i++) {
        if (penjualan[i] > rataRata) {
            jumlahHari++;
        }
    }

    printf("\nRata-rata penjualan: %.2f porsi\n", rataRata);
    printf("Jumlah hari di atas rata-rata: %d hari\n", jumlahHari);

    return 0;
}