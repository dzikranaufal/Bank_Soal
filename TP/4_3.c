#include <stdio.h>
#include <stdlib.h>
int main(){
    int statusBayar;
    printf("Status pembayaran (1=sudah, 0=belum): ");
    scanf("%d", &statusBayar);

    if (statusBayar == 1) {
        printf("Akses ruang meeting diberikan!\n");
    } else {
        printf("Akses ditolak!\n");
    }
    return 0;
}