#include <stdio.h>
#include <stdlib.h>

int main(){
    int lamaSewa;
    int tarifPerJam = 5000;
    int totalBiaya;

    printf("Masukkan lama billing (jam): ");
    scanf("%d", &lamaSewa);

    totalBiaya = lamaSewa * tarifPerJam;

    printf("Total billing = Rp%d\n", totalBiaya);
    return 0;
}