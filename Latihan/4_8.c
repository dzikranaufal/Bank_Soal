#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char produk[20];
    long dana;
    int profilRisiko;
    float bunga, keuntungan;

    printf("Masukkan jenis produk (deposito/reksadana): ");
    scanf("%s", produk);
    printf("Masukkan jumlah dana investasi: ");
    scanf("%ld", &dana);

    if (strcmp(produk, "deposito") == 0) {
        if (dana >= 100000000) {
            bunga = 6;
        } else {
            bunga = 4;
        }
        keuntungan = dana * (bunga / 100);
        printf("Bunga per tahun: %.0f%%\n", bunga);
        printf("Estimasi keuntungan 1 tahun: Rp%.0f\n", keuntungan);

    } else if (strcmp(produk, "reksadana") == 0) {
        printf("Profil risiko (1=konservatif, 2=agresif): ");
        scanf("%d", &profilRisiko);

        if (profilRisiko == 1) {
            bunga = 5;
            keuntungan = dana * (bunga / 100);
            printf("Bunga per tahun: %.0f%%\n", bunga);
            printf("Estimasi keuntungan 1 tahun: Rp%.0f\n", keuntungan);
        } else if (profilRisiko == 2) {
            bunga = 9;
            keuntungan = dana * (bunga / 100);
            printf("Bunga per tahun: %.0f%%\n", bunga);
            printf("Estimasi keuntungan 1 tahun: Rp%.0f\n", keuntungan);
        } else {
            printf("Profil risiko tidak valid.\n");
        }
    } else {
        printf("Jenis produk tidak dikenali.\n");
    }
    return 0;
}