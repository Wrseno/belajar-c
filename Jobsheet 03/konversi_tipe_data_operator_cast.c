#include <stdio.h>

int main() {
    int harga = 71500;
    int jumlah = 35;
    float harga_satuan;

    harga_satuan = harga / jumlah;
    printf("Total diskon yang didapat = %0.1f\n", harga_satuan);

    harga_satuan = (float) harga / jumlah;
    printf("Total diskon yang didapat = %0.1f\n", harga_satuan);

    return 0;
}