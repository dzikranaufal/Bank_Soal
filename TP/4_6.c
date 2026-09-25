#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int statusLogin;
    char jenisAkun[20];

    printf("Status login (1=sudah, 0=belum): ");
    scanf("%d", &statusLogin);

    if (statusLogin == 1) {
        printf("Masukkan jenis akun (premium/gratis): ");
        scanf("%s", jenisAkun);

        if (strcmp(jenisAkun, "premium") == 0) {
            printf("Unduhan resolusi tinggi diizinkan.\n");
        } else {
            printf("Hanya bisa unduh resolusi rendah.\n");
        }
    } else {
        printf("Silakan login terlebih dahulu.\n");
    }
    return 0;
}