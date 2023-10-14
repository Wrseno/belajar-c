#include <stdio.h>

int main() {
    int bilangan, jumlah, n;

    printf("Menghitung bilangan 1 + 2 + 3 + ... + n\n");
    printf("Masukkan bilangan n : ");
    scanf("%d", &n);

    jumlah = 0;
    bilangan = 1;
    while (bilangan <= n) {
        jumlah += bilangan;
        bilangan++;
    }

    printf("Jumlah = %d\n", jumlah);
    return 0;
}
