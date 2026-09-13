#include <stdio.h>
int main(){
    int jumlahBuku;
    printf("Masukkan jumlah buku yang dipinjam: ");
    scanf("%d", &jumlahBuku);

    if (jumlahBuku > 5) {
        printf("Melebihi batas peminjaman.\n");
    }
    return 0;
}