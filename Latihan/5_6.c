#include <stdio.h>

int main() {
    int pin;

    do {
        printf("Masukkan PIN: ");
        scanf("%d", &pin);

        if (pin != 1234) {
            printf("PIN salah, coba lagi\n");
        }

    } while (pin != 1234);

    printf("Akses diterima");

    return 0;
}