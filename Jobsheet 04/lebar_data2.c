#include <stdio.h>

int main() {
    char x = 'A';

    printf("%c\n", x);      // lebarnya adalah 1 karakter
    printf("%4c\n", x);     // lebarnya adalah 4 karakter
    printf("%-3c\n", x);    // lebarnya adalah 3 karakter

    return 0;
}
