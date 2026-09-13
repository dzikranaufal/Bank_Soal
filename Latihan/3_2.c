#include <stdio.h>
int main(){
    int usia;
    printf("Masukkan usia: ");
    scanf("%d", &usia);

    if (usia >= 18) {
        printf("Anda memenuhi syarat vaksinasi booster.\n");
    } else {
        printf("Anda belum memenuhi syarat.\n");
    }
    return 0;
}