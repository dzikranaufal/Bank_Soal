#include <stdio.h>
#include <stdlib.h>

int main(){
    int jmlLembar;
    int biayaPerLembar = 500;
    int biayaDesain = 10000;
    int totalBiaya;

    printf("Masukkan jumlah lembar cetak: ");
    scanf("%d", &jmlLembar);

    totalBiaya = jmlLembar * biayaPerLembar;
    totalBiaya += biayaDesain;

    printf("Total biaya cetak = Rp%d\n", totalBiaya);
    return 0;
}