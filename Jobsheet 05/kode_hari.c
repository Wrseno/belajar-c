#include <stdio.h>

int main() {
    int kodeHari;
    printf("Masukkan kode hari (1-7) = ");
    scanf("%d", &kodeHari);

    if (kodeHari == 1) {
        printf("Senin");
    } else if (kodeHari == 2) {
        printf("Selasa");
    } else if (kodeHari == 3) {
        printf("Rabu");
    } else if (kodeHari == 4) {
        printf("Kamis");
    } else if (kodeHari == 5) {
        printf("Jum\'at");
    } else if (kodeHari == 6) {
        printf("Sabtu");
    } else if (kodeHari == 7) {
        printf("Minggu");
    }
}
