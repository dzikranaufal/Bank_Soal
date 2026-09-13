#include <stdio.h>
#include <stdlib.h>
int main(){
    float kehadiran;
    int nilaiUjian;

    printf("Masukkan persentase kehadiran: ");
    scanf("%f", &kehadiran);

    if (kehadiran >= 75) {
        printf("Masukkan nilai ujian teknik: ");
        scanf("%d", &nilaiUjian);

        if (nilaiUjian >= 80) {
            printf("Naik sabuk!\n");
        } else {
            printf("Belum naik sabuk, nilai ujian kurang!\n");
        }
    } else {
        printf("Belum naik sabuk, kehadiran kurang!\n");
    }
    return 0;
}