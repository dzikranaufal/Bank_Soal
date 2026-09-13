#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
    char nama[50];
    float suhu;
    bool demam;

    printf("Masukkan Nama Pasien: ");
    scanf(" %[^\n]", nama);
    printf("Masukkan suhu tubuh (C): ");
    scanf("%f", &suhu);
    printf("Status demam (1=ya, 0=tidak): ");
    scanf("%d", &demam);

    printf("\n--- Data Pasien ---\n");
    printf("Nama Pasien   : %s\n", nama);
    printf("Suhu Tubuh    : %.1f C\n", suhu);
    printf("Status Demam  : %d\n", demam);

    return 0;
}