#include <stdio.h>

int main() {
    int totalHarga, persenDiskon, diskon, totalBayar;

    printf("Total Harga = ");
    scanf("%d", &totalHarga);

    persenDiskon = 0;
    if (totalHarga > 100000) {
        persenDiskon = 10;
    }

    diskon = (float) persenDiskon / 100 * totalHarga;
    totalBayar = totalHarga - diskon;

    printf("Nilai diskon = %d\n", diskon);
    printf("Nilai pembayaran = %d\n", totalBayar);

    return 0;
}
