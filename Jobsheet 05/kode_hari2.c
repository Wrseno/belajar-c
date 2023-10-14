#include <stdio.h>

int main() {
    int kodeHari;
    printf("Masukkan Kode Hari (1-7) = ");
    scanf("%d", &kodeHari);

    switch(kodeHari) {
        case 1:
            printf("Senin");
            break;
        case 2:
            printf("Selasa");
            break;
        case 3:
            printf("Rabu");
            break;
        case 4:
            printf("Kamis");
            break;
        case 5:
            printf("Juma\'at");
            break;
        case 6:
            printf("Sabtu");
            break;
        case 7:
            printf("Minggu");
            break;
        default:
            printf("Kode hari yang Anda masukkan salah");
    }
}
