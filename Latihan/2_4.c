//Tempat rental PS menetapkan tarif sewa per jam sebagai berikut:

//PS 4: Rp 15.000/jam
//PS 5: Rp 20.000/jam

//Buatlah program untuk membantu operator menghitung total biaya yang harus dibayar oleh pelanggan yang menyewa PS 4 dan PS 5 (jumlah jam sewa masing-masing berupa inputan)!

#include <stdio.h>
#include <stdlib.h>
int main(){
    int jamPS4, jamPS5;
    int tarifPS4 = 15000, tarifPS5 = 20000;
    int total;

    printf("Masukkan jam sewa PS4: ");
    scanf("%d", &jamPS4);
    printf("Masukkan jam sewa PS5: ");
    scanf("%d", &jamPS5);

    total = (jamPS4 * tarifPS4) + (jamPS5 * tarifPS5);

    printf("Total biaya sewa = Rp%d\n", total);
    return 0;
}
