#include <stdio.h>

int main() {
    char nama[50];
    int skor[5];
    int i, total = 0;
    int tertinggi;
    float rataRata;

    printf("Masukkan nama atlet: ");
    scanf(" %49[^\n]", nama);

    for (i = 0; i < 5; i++) {
        printf("Masukkan skor ke-%d: ", i + 1);
        scanf("%d", &skor[i]);

        total = total + skor[i];
    }

    tertinggi = skor[0];

    for (i = 1; i < 5; i++) {
        if (skor[i] > tertinggi) {
            tertinggi = skor[i];
        }
    }

    rataRata = total / 5.0;

    printf("\nNama atlet: %s\n", nama);
    printf("Seluruh skor: ");

    for (i = 0; i < 5; i++) {
        printf("%d ", skor[i]);
    }

    printf("\nRata-rata skor: %.2f\n", rataRata);
    printf("Skor tertinggi: %d\n", tertinggi);

    return 0;
}