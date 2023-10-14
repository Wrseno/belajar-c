// fungsi scanf() digunakan memasukan data dari keyboard

#include <stdio.h>

int main() {
    float sisi, keliling, luas;

    printf("Masukkan data sisi persegi : ");
    scanf("%f", &sisi);

    keliling = 4 * sisi;
    luas = sisi * sisi;

    printf("Data Persegi :\n");
    printf("Sisi = %f\n", sisi);
    printf("Keliling = %f\n", keliling);
    printf("Luas = %f\n", luas);

    return 0;
}
