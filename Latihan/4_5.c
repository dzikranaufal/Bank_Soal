#include <stdio.h>
#include <stdlib.h>
int main(){
    float tinggi;
    int didampingi;

    printf("Masukkan tinggi badan (cm): ");
    scanf("%f", &tinggi);

    if (tinggi >= 120) {
        printf("Didampingi orang dewasa? (1=ya, 0=tidak): ");
        scanf("%d", &didampingi);

        if (didampingi == 1) {
            printf("Boleh naik wahana ekstrem.\n");
        } else {
            printf("Harus didampingi orang dewasa.\n");
        }
    } else {
        printf("Tinggi badan belum memenuhi syarat.\n");
    }
    return 0;
}