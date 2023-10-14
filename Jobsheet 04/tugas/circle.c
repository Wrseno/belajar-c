// program menghitung luas dan keliling lingkaran

#include <stdio.h>

int main() {
    float radius, keliling, luas;
    const float PI = 3.14;

    printf("Masukkan radius lingkaran : ");
    scanf("%f", &radius);

    keliling = 2 * PI * radius;

    luas = PI * radius * radius;

    printf("Keliling lingkaran adalah   : %2.f\n", keliling);
    printf("Luas lingkaran adalah       : %2.f\n", luas);
}