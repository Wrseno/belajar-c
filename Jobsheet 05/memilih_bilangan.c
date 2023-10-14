#include <stdio.h>

int main() {
    float bilangan;

    printf("Pilih sebuah bilangan = ");
    scanf("%f", &bilangan);

    if ((bilangan <= 100) && (bilangan >= 0)) {
        printf("Bilangan yang Anda pilih bernilai antara 0 dan 100");
    } else {
        printf("Bilangan yang Anda pilih lebih besar dari 100 atau kurang dari 0");
    }
}
