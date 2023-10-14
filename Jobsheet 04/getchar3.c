// fungsi getchar 

#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan satu karakter = ");
    karakter = getchar();

    printf("Karakter yang Anda masukkan adalah '%c'\n", karakter);

    fflush(stdin);

    printf("Masukkan sebuah karakter lagi = ");
    karakter = getchar();

    printf("Karakter kedua yang Anda masukkan adalah '%c\n'", karakter);

    return 0;
}
