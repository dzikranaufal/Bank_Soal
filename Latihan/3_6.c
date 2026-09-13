#include <stdio.h>
int main(){
    int kode;
    char namaOrtu[50];
    int nomorKursi;
    char noKTP[20];

    printf("Pilih kategori (1=Anak-anak, 2=Umum, 3=Lansia): ");
    scanf("%d", &kode);

    switch(kode){
        case 1:
            printf("Harga tiket: Rp25.000\n");
            printf("Masukkan nama orang tua pendamping: ");
            scanf(" %[^\n]s", namaOrtu);
            printf("Tiket berhasil dipesan.\n");
            break;
        case 2:
            printf("Harga tiket: Rp40.000\n");
            printf("Masukkan nomor kursi pilihan: ");
            scanf("%d", &nomorKursi);
            printf("Tiket berhasil dipesan.\n");
            break;
        case 3:
            printf("Harga tiket: Rp20.000\n");
            printf("Masukkan nomor identitas (KTP): ");
            scanf(" %[^\n]s", noKTP);
            printf("Tiket berhasil dipesan.\n");
            break;
        default:
            printf("Kategori penonton tidak tersedia.\n");
    }
    return 0;
}