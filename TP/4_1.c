#include <stdio.h>
#include <stdlib.h>
int main(){
    int baterai;
    printf("Masukkan persentase baterai (%%): ");
    scanf("%d", &baterai);

    if (baterai < 15) {
        printf("Baterai lemah, segera isi daya!\n");
    }
    return 0;
}