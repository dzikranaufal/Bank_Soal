#include <stdio.h>

int main() {
    int n, i, bilangan, total = 0;

    printf("Masukkan jumlah n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        bilangan = (2 * i) - 1;
        total = total + bilangan;
    }

    printf("Jumlah total = %d", total);

    return 0;
}