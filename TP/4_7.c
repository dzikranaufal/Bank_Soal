#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char username[20], password[20], role[20];

    printf("Masukkan username: ");
    scanf("%s", username);

    if (strcmp(username, "Dzikra") == 0) {
        printf("Masukkan password: ");
        scanf("%s", password);

        if (strcmp(password, "Dzikra123") == 0) {
            printf("Masukkan role (admin/staff): ");
            scanf("%s", role);

            if (strcmp(role, "admin") == 0) {
                printf("Login berhasil sebagai Admin.\n");
            } else if (strcmp(role, "staff") == 0) {
                printf("Login berhasil sebagai Staff.\n");
            } else {
                printf("Role tidak dikenali.\n");
            }
        } else {
            printf("Password salah.\n");
        }
    } else {
        printf("Username tidak ditemukan.\n");
    }
    return 0;
}