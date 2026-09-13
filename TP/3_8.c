#include <stdio.h>
#include <stdlib.h>
int main(){
    int usia, statusSehat, statusIzin;

    printf("Masukkan usia: ");
    scanf("%d", &usia);
    printf("Status kesehatan (1=sehat, 0=tidak sehat): ");
    scanf("%d", &statusSehat);

    if (usia >= 15 && usia <= 55 && statusSehat == 1) {
        printf("Masukkan status surat izin (1=punya, 0=tidak punya): ");
        scanf("%d", &statusIzin);

        if (statusIzin == 1) {
            printf("Pendakian disetujui.\n");
        } else {
            printf("Pendakian ditunda, surat izin belum lengkap.\n");
        }
    } else {
        printf("Pendakian tidak diperbolehkan.\n");
    }
    return 0;
}