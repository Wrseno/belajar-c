#include <stdio.h>

int main() {
    int tahun, tahunKabisat;

    printf("Masukkan Tahun = ");
    scanf("%d", &tahun);

    if (tahun > 0) {
        if ((tahun % 100) == 0) {
            tahunKabisat = ((tahun % 400) == 0);
        } else {
            tahunKabisat = ((tahun % 4) == 0);
        }

        if (tahunKabisat) {
            printf("Tahun Kabisat");
        } else {
            printf("Bukan Tahun Kabisat");
        }
    } else {
        printf("Tahun yang Anda masukkan salah");
    }
}
