#include <stdio.h>
#include <stdlib.h>

int main(){
    float celsius, fahrenheit, kelvin;

    printf("Masukkan suhu (Celsius): ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;
    kelvin = celsius + 273.15;

    printf("Celsius    = %.2f C\n", celsius);
    printf("Fahrenheit = %.2f F\n", fahrenheit);
    printf("Kelvin     = %.2f K\n", kelvin);

    return 0;
}