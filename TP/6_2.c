#include <stdio.h>

int main() {
    int angka[8];
    int i;
    int jumlah = 0;
    int perkalian = 1;

    printf("Masukkan 8 angka: ");
    for (i = 0; i < 8; i++) {
        scanf("%d", &angka[i]);
    }

    for (i = 0; i < 8; i++) {
        if (i % 2 == 0) {
            jumlah = jumlah + angka[i];
        } else {
            perkalian = perkalian * angka[i];
        }
    }

    printf("Jumlah indeks genap: %d\n", jumlah);
    printf("Perkalian indeks ganjil: %d\n", perkalian);

    return 0;
}