#include <stdio.h>

int main() {
    int angka[10];
    int i;

    printf("Masukan 10 angka: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &angka[i]);
    }

    printf("Bilangan ganjil: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 2 != 0) {
            printf("%d ", angka[i]);
        }
    }

    printf("\nBilangan genap: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 2 == 0) {
            printf("%d ", angka[i]);
        }
    }

    return 0;
}