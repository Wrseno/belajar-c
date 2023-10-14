#include <stdio.h>
const float PI = 3.14; // medefinisikan konstanta

int main() {
    float radius, keliling, luas;
    radius = 10; // inisialisasi variable radius
    keliling = 2 * PI * radius;
    luas = PI * radius * radius;
    
    printf("Data Lingkaran\n");
    printf("Jari-jari   = %f\n", radius);
    printf("Keliling    = %f\n", keliling);
    printf("Luas        = %f\n", luas);
}