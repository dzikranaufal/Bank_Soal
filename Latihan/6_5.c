#include <stdio.h>

int main() {
    int angka[10];
    int n, indeks, i;

    printf("Masukkan jumlah elemen: ");
    scanf("%d", &n);

    if (n < 1 || n > 10) {
        printf("Jumlah elemen tidak valid!\n");
        return 0;
    }

    for (i = 0; i < n; i++) {
        printf("Masukkan elemen ke-%d: ", i);
        scanf("%d", &angka[i]);
    }

    printf("Array awal: ");
    for (i = 0; i < n; i++) {
        printf("%d ", angka[i]);
    }

    printf("\nMasukkan indeks yang ingin dihapus: ");
    scanf("%d", &indeks);

    if (indeks >= 0 && indeks < n) {
        for (i = indeks; i < n - 1; i++) {
            angka[i] = angka[i + 1];
        }

        n--;

        printf("Array setelah dihapus: ");
        for (i = 0; i < n; i++) {
            printf("%d ", angka[i]);
        }
    } else {
        printf("Indeks tidak valid!");
    }

    printf("\n");

    return 0;
}
