#include <stdio.h>

int main() {
    int angka;

    printf("Masukkan sebuah bilangan bulat = ");
    scanf("%d", &angka);

    if (angka % 2) {
        printf("Bilangan yang Anda masukkan adalah bilangan genap");
    } else {
        printf("Bilangan yang Anda masukkan adalah bilangan ganjil");
    }

    return 0;
}
