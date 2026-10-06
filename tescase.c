#include <stdio.h>

int main(){

    int usia, statusSehat, statusIzin;

    printf("masukan usia pendaki: ");
    scanf("%d", &usia);
    printf("masukan status sehat (1 = ya / 0 = tidak): ");
    scanf("%d", &statusSehat);

    if(usia >= 15 && usia <= 55  && statusSehat == 1){
        printf("Masukan status izin (1=punya / 0 = tidak punya): ");
        scanf("%d", &statusIzin);
        if(statusIzin == 1){
            printf("pendakian disetujui");
        }else if(statusIzin == 0){
            printf("pendakian ditunda, surat izin belum lengkap");
        }else{
            printf("summit diroblox");
        }
    }else{
        printf("pendakian tidak diperbolehkan");
    }




    return 0;
}