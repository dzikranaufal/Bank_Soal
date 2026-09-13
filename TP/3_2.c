#include <stdio.h>
#include <stdlib.h>
int main(){
    float kehadiran;
    printf("Masukkan persentase kehadiran: ");
    scanf("%f", &kehadiran);

    if (kehadiran >= 80) {
        printf("Berhak mendapat sertifikat.\n");
    } else {
        printf("Tidak berhak mendapat sertifikat.\n");
    }
    return 0;
}