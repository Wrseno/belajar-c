#include <stdio.h>

int main() {
    int bilangan, faktorial, n;

    printf("Program menghitung n faktorial");
    printf("Masukkan nilai n : ");
    scanf("%d", &n);

    faktorial = 1;
    bilangan = 1;
    while (bilangan <= n) {
        faktorial *= bilangan;
        bilangan++;
    }

    if (n < 0) {
        printf("n harus lebih besar atau sama dengan 0\n");
    } else {
        printf("%d! = %d\n", n, faktorial);

    }
    
    return 0;
}