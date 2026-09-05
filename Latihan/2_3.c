// Waguri ingin membeli 3 jenis kue dengan harga sebagai berikut:

// Nastar: Rp 80.000, diskon 8%
// Kastengel: Rp 90.000, diskon 25%
// Putri Salju: Rp 75.000, diskon 40%

// Jika waguri membeli 3 toples nastar, 2 toples kastengel, dan 4 toples putri salju, buat program yang menghitung total harga keseluruhan sebelum dan sesudah setiap jenis kue mendapat diskon!

#include <stdio.h>
#include <stdlib.h>
int main(){
    int hargaNastar = 80000, hargaKastengel = 90000, hargaPutriSalju = 75000;
    int jmlNastar = 3, jmlKastengel = 2, jmlPutriSalju = 4;
    float diskonNastar = 0.08, diskonKastengel = 0.25, diskonPutriSalju = 0.40;

    int totalSebelum = (hargaNastar * jmlNastar) + (hargaKastengel * jmlKastengel) + (hargaPutriSalju * jmlPutriSalju);

    float totalSesudah = (hargaNastar * jmlNastar * (1 - diskonNastar))
                        + (hargaKastengel * jmlKastengel * (1 - diskonKastengel))
                        + (hargaPutriSalju * jmlPutriSalju * (1 - diskonPutriSalju));

    printf("Total sebelum diskon = Rp%d\n", totalSebelum);
    printf("Total sesudah diskon = Rp%.0f\n", totalSesudah);
    return 0;
}