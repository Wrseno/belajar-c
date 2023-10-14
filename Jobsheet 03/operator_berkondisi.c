#include <stdio.h>

int main() {
    int a, b, terbesar, terkecil;

    a = 76;
    b = 7;

    terbesar = a > b ? a : b;
    printf("Bilangan terbesar = %d\n", terbesar);
    terkecil = a < b ? a : b;
    printf("Bilangan terkecil = %d\n", terkecil);

    return 0;
}