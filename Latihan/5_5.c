#include <stdio.h>

int main() {
    int air = 100;
    int jam = 0;

    while (air > 0) {
        printf("Jam %d: %d liter\n", jam, air);

        air = air - 10;
        jam++;
    }

    printf("Jam %d: 0 liter\n", jam);

    return 0;
}