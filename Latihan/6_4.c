#include <stdio.h>

int main() {
    char nama[50];
    int pengeluaran[7];
    int total = 0;
    int i;
    float rataRata;

    printf("Masukkan nama mahasiswa: ");
    scanf(" %49[^\n]", nama);

    for (i = 0; i < 7; i++) {
        printf("Pengeluaran hari ke-%d: Rp", i + 1);
        scanf("%d", &pengeluaran[i]);

        total = total + pengeluaran[i];
    }

    rataRata = total / 7.0;

    printf("\nNama mahasiswa: %s\n", nama);
    printf("Total pengeluaran: Rp%d\n", total);
    printf("Rata-rata pengeluaran per hari: Rp%.2f\n", rataRata);

    return 0;
}
