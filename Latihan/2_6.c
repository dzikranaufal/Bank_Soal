#include <stdio.h>
#include <stdlib.h>
int main(){
    int nilaiA, nilaiB;
    int lebihBesar, keduanyaLulus;

    printf("Masukkan Nilai A: ");
    scanf("%d", &nilaiA);
    printf("Masukkan Nilai B: ");
    scanf("%d", &nilaiB);

    lebihBesar = (nilaiA > nilaiB);
    keduanyaLulus = (nilaiA > 75) && (nilaiB > 75);

    printf("Apakah Nilai A > Nilai B? %d\n", lebihBesar);
    printf("Apakah keduanya di atas 75? %d\n", keduanyaLulus);

    return 0;
}

