#include <stdio.h>
#include <stdlib.h>

int main(){
    long gajiPokok, tunjanganTransport, potonganBPJS;
    long gajiKotor, gajiBersih;
    long umr = 4000000;
    int diatasUMR;

    printf("Masukkan gaji pokok: ");
    scanf("%ld", &gajiPokok);
    printf("Masukkan tunjangan transportasi: ");
    scanf("%ld", &tunjanganTransport);
    printf("Masukkan potongan BPJS: ");
    scanf("%ld", &potonganBPJS);

    gajiKotor = gajiPokok;
    gajiKotor += tunjanganTransport;

    gajiBersih = gajiKotor;
    gajiBersih -= potonganBPJS;

    diatasUMR = (gajiBersih > umr);

    printf("Gaji Kotor  = Rp%ld\n", gajiKotor);
    printf("Gaji Bersih = Rp%ld\n", gajiBersih);
    printf("Status di atas UMR (1=ya, 0=tidak): %d\n", diatasUMR);

    return 0;
}