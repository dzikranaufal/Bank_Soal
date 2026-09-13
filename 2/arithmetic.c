#include <stdio.h>
#include <stdbool.h>

int main(){

    // ==========================================
    // 1. OPERATOR ARITMATIKA
    // ==========================================

    int a = 10;
    int b = 3;

    printf("=== OPERATOR ARITMATIKA ===\n");

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);


    // ==========================================
    // 2. OPERATOR INCREMENT & DECREMENT
    // ==========================================

    int angka = 5;

    printf("\n=== INCREMENT & DECREMENT ===\n");

    printf("Nilai awal       : %d\n", angka);

    angka++;
    printf("Setelah angka++  : %d\n", angka);

    angka--;
    printf("Setelah angka--  : %d\n", angka);


    // ==========================================
    // 3. OPERATOR ASSIGNMENT
    // ==========================================

    int nilai = 10;

    printf("\n=== OPERATOR ASSIGNMENT ===\n");

    printf("Nilai awal : %d\n", nilai);

    nilai += 5;
    printf("Setelah += 5 : %d\n", nilai);

    nilai -= 3;
    printf("Setelah -= 3 : %d\n", nilai);

    nilai *= 2;
    printf("Setelah *= 2 : %d\n", nilai);

    nilai /= 4;
    printf("Setelah /= 4 : %d\n", nilai);


    // ==========================================
    // 4. OPERATOR RELASIONAL
    // ==========================================

    int x = 10;
    int y = 5;

    printf("\n=== OPERATOR RELASIONAL ===\n");

    printf("x == y : %d\n", x == y);
    printf("x != y : %d\n", x != y);
    printf("x > y  : %d\n", x > y);
    printf("x < y  : %d\n", x < y);
    printf("x >= y : %d\n", x >= y);
    printf("x <= y : %d\n", x <= y);


    // ==========================================
    // 5. OPERATOR LOGIKA
    // ==========================================

    int umur = 20;
    int memilikiKartu = 1;

    printf("\n=== OPERATOR LOGIKA ===\n");

    printf("Umur >= 17 : %d\n", umur >= 17);
    printf("Memiliki kartu : %d\n", memilikiKartu);

    printf("AND (&&) : %d\n",umur >= 17 && memilikiKartu);

    printf("OR (||) : %d\n", umur >= 17 || memilikiKartu);

    printf("NOT (!) : %d\n",!memilikiKartu);


    // ==========================================
    // 6. KOMBINASI OPERATOR
    // ==========================================

    int jumlahBarang = 4;
    int hargaBarang = 15000;
    int total;

    printf("\n=== KOMBINASI OPERATOR ===\n");

    total = jumlahBarang * hargaBarang;

    printf("Jumlah barang : %d\n", jumlahBarang);
    printf("Harga barang  : Rp%d\n", hargaBarang);
    printf("Total belanja : Rp%d\n", total);

    printf("Mendapat diskon : %d\n",
           jumlahBarang >= 3 && total >= 50000);


    return 0;
}