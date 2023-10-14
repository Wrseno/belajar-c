#include <stdio.h>

int main() {
    float a, b, tambah, kurang, bagi, kali;
    a = 30;
    b = 7;

    tambah = a + b;
    kurang = a - b;
    bagi = a / b;
    kali = a * b;

    printf("Hasil tambah = %f\n", tambah);
    printf("Hasil kurang = %f\n", kurang);
    printf("Hasil bagi = %f\n", bagi);
    printf("Hasil kali = %f\n", kali);

    return 0;
}