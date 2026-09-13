#include <stdio.h>
#include <stdlib.h>
int main(){
    int poin;
    printf("Masukkan poin loyalitas: ");
    scanf("%d", &poin);

    if (poin >= 500) {
        printf("Membership: Platinum\n");
    } else if (poin >= 200) {
        printf("Membership: Gold\n");
    } else {
        printf("Membership: Silver\n");
    }
    return 0;
}