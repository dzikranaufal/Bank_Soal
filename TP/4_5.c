#include <stdio.h>
#include <stdlib.h>

int main() {
    int kode;
    int hari;
    char prioritas[20];

    printf("Masukkan kode urgensi: ");
    scanf("%d", &kode);

    switch(kode) {
        case 1:
            sprintf(prioritas, "Tinggi");
            hari = 1;
            break;

        case 2:
            sprintf(prioritas, "Sedang");
            hari = 3;
            break;

        case 3:
            sprintf(prioritas, "Rendah");
            hari = 7;
            break;

        default:
            printf("Kode urgensi tidak valid!\n");
            return 0;
    }

    printf("Prioritas %s, kirim dalam %d hari\n", prioritas, hari);

    return 0;
}