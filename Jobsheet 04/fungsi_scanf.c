// fungsi scanf

#include <stdio.h>

int main() {
    float lebar, panjang, keliling, luas;

    printf("Masukkan lebar = ");
    scanf("%f", &lebar);
    printf("Masukkan panjang = ");
    scanf("%f", &panjang);

    keliling = (lebar + panjang) * 2;
    luas = panjang * lebar;

    printf("Data Persegi Panjang : \n");
    printf("Lebar       = %f\n", lebar);
    printf("Panjang     = %f\n", panjang);
    printf("Keliling    = %f\n", keliling);
    printf("Luas        = %f\n", luas);

    return 0;
}
