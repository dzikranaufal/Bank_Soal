#include <stdio.h>
int main(){
    int statusKerja;
    long penghasilan;

    printf("Status pekerjaan (1=tetap, 0=bukan): ");
    scanf("%d", &statusKerja);

    if (statusKerja == 1) {
        printf("Masukkan penghasilan bulanan: ");
        scanf("%ld", &penghasilan);

        if (penghasilan >= 8000000) {
            printf("Pinjaman disetujui.\n");
        } else {
            printf("Pinjaman ditolak, penghasilan tidak mencukupi.\n");
        }
    } else {
        printf("Pinjaman ditolak, status pekerjaan tidak memenuhi syarat.\n");
    }
    return 0;
}