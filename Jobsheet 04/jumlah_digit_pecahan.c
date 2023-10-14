// menampilkan jumlah digit pecahan

#include <stdio.h>

int main() {
    float a = 500;
    float b = 17000;

    printf("%10.2f\n", a);
    printf("%.2f\n", a);
    printf("%.4f\n", a);
    printf("%10.2f\n", b);
    printf("%.2f\n", b);
    printf("%.4f\n", b);

    return 0;
}
