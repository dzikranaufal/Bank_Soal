
// Toko Manga ingin menyimpan informasi dasar sebuah manga, yaitu: Judul manga (sudah langsung ditetapkan di dalam program, misalnya "Kimi No Todoke").
// - Tahun terbit buku (diinput oleh pengguna).
// - Rating buku dalam bentuk desimal (diinput oleh pengguna, misalnya 4.5).
// Buatlah program dalam bahasa C untuk menyimpan data tersebut menggunakan tipe data yang sesuai. Judul buku cukup dideklarasikan dan langsung diberi nilai pada variabel, sedangkan tahun terbit dan rating diminta dari input pengguna dengan scanf. Setelah itu, tampilkan seluruh informasi buku ke layar.

#include <stdio.h>

int main(){

    char judul[50] = "Kimi No Todoke";
    int tahun_terbit;
    float rating;

    printf("Masukan tahun terbit: ");
    scanf("%d", &tahun_terbit);
    
    printf("Masukan rating : ");
    scanf("%f", &rating);

    printf("\nData Manga\n");
    printf("Judul        : %s\n", judul);
    printf("Tahun terbit : %d\n", tahun_terbit);
    printf("rating       : %.2f\n", rating);


}