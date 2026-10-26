#include <stdio.h>

int main(){

    int nilai[5];

    //input satu satu manual
    printf("Masukan 5 nilai: ");
    scanf("%d", &nilai[0]);
    scanf("%d", &nilai[1]);
    scanf("%d", &nilai[2]);
    scanf("%d", &nilai[3]);
    scanf("%d", &nilai[4]);

    //input menggunakan for
    printf("Masukan 5 nilai: ");
    for(int i = 0; i < 5; i++){
        scanf("%d", &nilai[i]);
    }

    //mengetahui jumlah
    int total = 0;

    for(int i = 0; i < 5; i++){
        total = total + nilai[i];
    }

    printf("Jumlah Nilai : %d", total);






    return 0;
}