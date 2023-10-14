// contoh penentuan diskon menggunakan if, else

#include <stdio.h>

int main() {
    int totalHarga, diskon, persenDiskon, totalBayar;

    printf("Nilai belanja : ");
    scanf("%d", &totalHarga);

    if (totalHarga > 100000) {
        persenDiskon = 10;
    } else {
        persenDiskon = 0;
    }

    diskon = (float) persenDiskon / 100 * totalHarga;
    totalBayar = totalHarga - diskon;

    printf("Diskon = %d\n", diskon);
    printf("Total Bayar = %d\n", totalBayar);

    return 0;
}
