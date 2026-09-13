#include <stdio.h>
#include <stdlib.h>

int main(){
    int tahun;
    int kabisat;

    printf("Masukkan tahun: ");
    scanf("%d", &tahun);

    kabisat = ((tahun % 400 == 0) || ((tahun % 4 == 0) && (tahun % 100 != 0)));

    printf("Tahun kabisat (1=ya, 0=tidak): %d\n", kabisat);

    return 0;
}