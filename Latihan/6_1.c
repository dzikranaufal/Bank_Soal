#include <stdio.h>

int main() {
    int angka[6];
    int total = 0;
    int i;

    printf("Masukan 6 angka: ");
    for (i = 0; i < 6; i++) {
        scanf("%d", &angka[i]);

        total = total + angka[i];
    }

    printf("Total = %d\n", total);

    return 0;
}