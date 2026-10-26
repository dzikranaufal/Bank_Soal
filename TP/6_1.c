#include <stdio.h>

int main() {
    int angka[10];
    int i;

    printf("Masukkan 10 angka: ");
    for (i = 0; i < 10; i++) {
        scanf("%d", &angka[i]);
    }

    printf("Kelipatan 5: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 5 == 0) {
            printf("%d ", angka[i]);
        }
    }

    printf("\nBukan kelipatan 5: ");
    for (i = 0; i < 10; i++) {
        if (angka[i] % 5 != 0) {
            printf("%d ", angka[i]);
        }
    }

    return 0;
}