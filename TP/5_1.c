#include <stdio.h>

int main() {
    int i;

    printf("Faktor dari 60 adalah: ");

    for (i = 1; i <= 60; i++) {
        if (60 % i == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}