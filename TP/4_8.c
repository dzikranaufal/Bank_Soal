#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char kondisi[20];
    int icuTersedia, perluObservasi;

    printf("Masukkan kondisi pasien (kritis/sedang/ringan): ");
    scanf("%s", kondisi);

    if (strcmp(kondisi, "kritis") == 0) {
        printf("Ketersediaan ICU (1=tersedia, 0=tidak): ");
        scanf("%d", &icuTersedia);

        if (icuTersedia == 1) {
            printf("Pasien langsung dirujuk ke ICU.\n");
        } else {
            printf("Pasien dirawat inap untuk observasi.\n");
        }
    } else if (strcmp(kondisi, "sedang") == 0) {
        printf("Perlu observasi lanjutan? (1=ya, 0=tidak): ");
        scanf("%d", &perluObservasi);

        if (perluObservasi == 1) {
            printf("Pasien dirawat inap untuk observasi.\n");
        } else {
            printf("Pasien diberi obat dan boleh pulang.\n");
        }
    } else if (strcmp(kondisi, "ringan") == 0) {
        printf("Pasien ditangani di poli umum.\n");
    } else {
        printf("Kategori kondisi tidak dikenali.\n");
    }
    return 0;
}