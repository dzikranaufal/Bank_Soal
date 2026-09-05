//Anda adalah seorang penjaga parkir motor di suatu gedung. 
//Harga tarif parkir motor per jam : 5000
//Jika pengunjung memiliki kartu member (1 = ya, 0 = tidak), maka mendapat tambahan diskon 5% dari harga setelah potongan pertama.

//Buatlah program dalam bahasa C yang menerima input durasi parkir (jam), dan status member, kemudian menghitung total biaya parkir yang harus dibayar sesuai aturan di atas!

#include <stdio.h>
#include <stdlib.h>
int main(){
    int durasi, member;
    float tarif = 5000, total;

    printf("Durasi parkir (jam): ");
    scanf("%d", &durasi);
    printf("Punya kartu member? (1=ya, 0=tidak): ");
    scanf("%d", &member);

    total = tarif * durasi;
    total = total - (total * 0.05 * member); 

    printf("Total biaya parkir = Rp%.0f\n", total);
    return 0;
}
