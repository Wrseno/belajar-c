#include <stdio.h>
#define PI 3.14 // mendefinisikan konstanta

int main() {
    float radius, keliling, luas;
    radius = 10;
    keliling = 2 * PI * radius;
    luas = PI * radius * radius;
    
    printf("Data Lingkaran\n");
    printf("Jari-jari   = %f\n", radius);
    printf("Keliling    = %f\n", keliling);
    printf("Luas        = %f\n", luas);
}
