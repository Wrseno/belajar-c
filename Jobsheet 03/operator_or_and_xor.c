#include <stdio.h>

int main() {
    int a, b;
    int x, y, z;
    a = 71;
    b = 68;

    x = a | b;
    y = a & b;
    z = a ^ b;

    printf("Nilai x = %d\n", x);
    printf("Nilai y = %d\n", y);
    printf("Nilai z = %d\n", z);

    return 0;
}