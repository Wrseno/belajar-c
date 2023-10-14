#include <stdio.h>

int main() {
    char karakter;
    int bil_bulat;
    float bil_real;

    bil_real = 78.3;
    bil_bulat = bil_real;
    karakter = bil_bulat;

    printf("Nilai bil real = %0.1f\n", bil_real);
    printf("Nilai bil bulat = %d\n", bil_bulat);
    printf("Nilai karakter = %c\n", karakter);

    return 0;
}