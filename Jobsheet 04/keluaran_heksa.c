// Program menampilkan keluaran dalam bentuk heksa dan oktal
#include <stdio.h>

int main() {
    int nilai = 0xA8BC;

    printf("Nilai dalam desimal = %d\n", nilai);
    printf("Nilai dalam heksadesimal = %x\n", nilai);
    printf("Nilai dalam heksadesimal = %X\n", nilai);
    printf("Nilai dalam oktal = %o\n");

    return 0;
}
