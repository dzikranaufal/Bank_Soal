#include <stdio.h>
#include <stdlib.h>
int main(){
    float berat;
    printf("Masukkan berat cucian (kg): ");
    scanf("%f", &berat);

    if (berat > 5) {
        printf("Ada biaya tambahan penanganan.\n");
    } else {
        printf("Tidak ada biaya tambahan.\n");
    }
    return 0;
}