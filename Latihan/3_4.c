#include <stdio.h>
int main(){
    float berat;
    printf("Masukkan berat paket (kg): ");
    scanf("%f", &berat);

    if (berat <= 1) {
        printf("Tarif ongkir: Rp10.000\n");
    } else if (berat <= 5) {
        printf("Tarif ongkir: Rp20.000\n");
    } else {
        printf("Tarif ongkir: Rp35.000\n");
    }
    return 0;
}