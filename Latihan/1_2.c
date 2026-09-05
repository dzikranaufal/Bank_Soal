
// BMKG membutuhkan laporan cuaca yg akan menyimpan data hasil pengukuran suhu. Sebelum program dibuat, tentukan terlebih dahulu tipe data yang paling sesuai untuk setiap informasi berikut:
// - Satuan suhu yang digunakan, yaitu 'C' (Celsius), 'F' (Fahrenheit), atau 'K' (Kelvin).
// - Nilai suhu hasil pengukuran, yang dapat berupa bilangan desimal, seperti 27.5.
// - Tanggal Laporan dilakukannya pengukuran.
// Buatkan Program bahasa C yang meminta input user untuk ketiga data diatas dan menampilkan hasilnya kembali 

#include <stdio.h>

int main(){

    char suhu;
    float nilai;
    int tanggal;

    printf("Masukan satuan suhu: ");
    scanf("%c", &suhu);
    
    printf("Masukan nilai suhu: ");
    scanf("%f", &nilai);

    printf("Tanggal laporan: ");
    scanf("%d", &tanggal);

    printf("\nData BMKG\n");
    printf("suhu  : %c\n", suhu);
    printf("nilai : %.1f\n", nilai);
    printf("rating: %d", tanggal);
}