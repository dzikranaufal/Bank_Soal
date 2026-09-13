#include <stdio.h>
#include <stdlib.h>
int main(){
    int kode;
    printf("Pilih ukuran (1=Small, 2=Medium, 3=Large): ");
    scanf("%d", &kode);

    switch(kode){
        case 1:
            printf("Ukuran Small, harga Rp15.000\n");
            break;
        case 2:
            printf("Ukuran Medium, harga Rp20.000\n");
            break;
        case 3:
            printf("Ukuran Large, harga Rp25.000\n");
            break;
        default:
            printf("Ukuran tidak tersedia!\n");
    }
    return 0;
}