#include <stdio.h>

int main() {
    int i;

    printf("Bilangan genap:\n");
    for (i = 1; i <= 30; i++) {
        if (i % 2 == 0) {
            printf("%d ", i);
        }
    }

    printf("\n\nBilangan ganjil:\n");
    for (i = 1; i <= 30; i++) {
        if (i % 2 != 0) {
            printf("%d ", i);
        }
    }

    return 0;
}