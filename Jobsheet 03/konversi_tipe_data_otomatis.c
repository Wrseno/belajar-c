#include <stdio.h>

int main() {
    int jumlah;
    float harga_satuan;
    double harga_total;

    jumlah = 7;
    harga_satuan = 7500.0;
    harga_total = jumlah * harga_satuan;

    printf("Total belanja Anda seharga Rp %0.1f\n", harga_total);

    return 0;
}