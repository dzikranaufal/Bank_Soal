#include <stdio.h>

int main() {
    int n, i;
    int faktorial = 1;

    printf("Masukkan bilangan: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        faktorial = faktorial * i;
    }

    printf("Faktorial dari %d = %d", n, faktorial);

    return 0;
}