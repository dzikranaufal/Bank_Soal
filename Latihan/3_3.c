#include <stdio.h>
int main(){
    int skor;
    printf("Masukkan skor ujian: ");
    scanf("%d", &skor);

    if (skor >= 85) {
        printf("Predikat: Mahir\n");
    } else if (skor >= 60) {
        printf("Predikat: Menengah\n");
    } else {
        printf("Predikat: Dasar\n");
    }
    return 0;
}