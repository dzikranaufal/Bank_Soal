#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

int main(){

    printf("ini baris atas");
    printf("\n");
    printf("ini baris bawah\n");
    printf("ini baris bawah lagi");

    int umur = 18;  
    float nilai = 97.5; 
    char jenisKelamin = 'L';
    char nama[20] = "Dzikra Naufal";
    double harga = 10000;

    printf("%d\n", umur); //int => %d
    printf("%f\n", nilai); //float => %f / %.(n)f
    printf("%c\n", jenisKelamin); //char => %c
    printf("%s\n", nama); //char[] => %s
    printf("%lf\n", harga); //double => %lf

    //scanf("%[datatype], &variable") 
    printf("Masukan umur: ");
    scanf("%d", &umur);
    printf("Masukan nilai: ");
    scanf("%f", &nilai);
    printf("Masukan harga: ");
    scanf("%lf", &harga);

    //string => %[^\n]
    printf("Masukan nama: ");
    scanf("%[^\n]", nama);

}