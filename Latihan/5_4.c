#include <stdio.h>

int main() {
    int amoeba = 1;
    printf("Jumlah amoeba: \n");
    while (amoeba <= 500) {
        printf("%d ", amoeba);
        amoeba = amoeba * 2;
    }

    return 0;
}