#include <stdio.h>
#include <stdlib.h>

int main(){
    int hargaBuku = 3000, hargaPulpen = 2000, hargaPenghapus = 1500;
    int jmlBuku = 5, jmlPulpen = 3, jmlPenghapus = 2;
    int total;

    total = (hargaBuku * jmlBuku) + (hargaPulpen * jmlPulpen) + (hargaPenghapus * jmlPenghapus);

    printf("Total belanja = Rp%d\n", total);
    return 0;
}