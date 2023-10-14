#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan sebuah bilangan : ");
    scanf("%d", &bilangan);

    if (bilangan % 2) {
        bilangan--;
    }

    for ( ; bilangan >= 0; bilangan -= 2) {
        printf("%d", bilangan);
    }

    return 0;
}
