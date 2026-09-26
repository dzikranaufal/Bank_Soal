#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char jenisKelamin[5];

    printf("Masukkan jenis kelamin (L/P): ");
    scanf("%s", jenisKelamin);

    if (strcmp(jenisKelamin, "L") == 0) {
        printf("Silakan menuju loket A.\n");
    } else if (strcmp(jenisKelamin, "P") == 0) {
        printf("Silakan menuju loket B.\n");
    } else {
        printf("Input tidak dikenali.\n");
    }
    return 0;
}