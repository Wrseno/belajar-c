#include <stdio.h>

int main() {
    const int pembagi = 7;
    int x, y, z;
    x = 8 % pembagi;
    y = 13 % pembagi;
    z = 14 % pembagi;

    printf("Sisa bagi = %d\n", x);
    printf("Sisa bagi = %d\n", y);
    printf("Sisa bagi = %d\n", z);

    return 0;
}