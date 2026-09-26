#include <stdio.h>
#include <stdlib.h>
int main(){
    int bintang;
    printf("Masukkan bintang rank: ");
    scanf("%d", &bintang);

    if (bintang >= 100) {
        printf("Mythic Immortal\n");
    } else if (bintang >= 50) {
        printf("Mythic Glory\n");
    } else if (bintang >= 25) {
        printf("Mythic Honor\n");
    } else {
        printf("Mythic\n");
    }
    return 0;
}