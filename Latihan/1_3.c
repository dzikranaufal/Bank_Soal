//Sebuah gudang penyimpanan barang memberi kode barang kepada setiap produk, misalnya "007", "015", atau "002". Kode ini selalu terdiri dari 3 digit yg dimulai dari 001
//Selain kode barang, program juga perlu menyimpan:
//- Nama barang (sudah ditetapkan langsung di program, misalnya "Kabel HDMI")
//- Berat barang dalam kilogram, dalam bentuk desimal (misalnya 0.25)

//Buatlah program dalam bahasa C yang:
//- Meminta pengguna menginput kode barang, dengan kode barang "007".
//- Meminta pengguna input berat barang 
//- Menampilkan seluruh data barang ke layar

#include <stdio.h>
#include <stdlib.h>
int main(){
    char namaBarang[] = "Kabel HDMI";
    char kodeBarang[4] = "007";  
    float berat;

    printf("Masukkan berat barang (kg): ");
    scanf("%f", &berat);

    printf("Kode Barang  : %s\n", kodeBarang);
    printf("Nama Barang  : %s\n", namaBarang);
    printf("Berat Barang : %.2f kg\n", berat);

    return 0;
}