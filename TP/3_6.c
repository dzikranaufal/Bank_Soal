#include <stdio.h>
#include <stdlib.h>
int main(){
    char kode;
    printf("Masukkan kode kamar (A/B/C): ");
    scanf(" %c", &kode);

    switch(kode){
        case 'A':
            printf("Kamar Standard\n");
            break;
        case 'B':
            printf("Kamar Deluxe\n");
            break;
        case 'C':
            printf("Kamar Suite\n");
            break;
        default:
            printf("Kode kamar tidak ditemukan!\n");
    }
    return 0;
}