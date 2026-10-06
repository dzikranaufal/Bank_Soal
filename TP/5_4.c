#include <stdio.h>

int main() {
    int tabungan = 0;
    int hari = 0;

    while (tabungan < 20000) {
        tabungan = tabungan + 2000;
        hari++;
    }

    printf("Jumlah hari: %d hari\n", hari);
    printf("Total tabungan: Rp%d", tabungan);

    return 0;
}