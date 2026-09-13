#include <stdio.h>
#include <stdlib.h>
int main(){
    float beratBarang;
    printf("Masukkan total berat barang (kg): ");
    scanf("%f", &beratBarang);

    if (beratBarang > 300) {
        printf("Beban melebihi kapasitas lift!\n");
    }
    return 0;
}