// fungsi getchar untuk membaca sebuah karakter

#include <stdio.h>

int main() {
    char karakter;

    printf("Masukkan sebuah karakter = ");
    karakter = getchar();

    printf("Karakter yang Anda masukkan adalah '%c'\n", karakter);

    char buffer[255];
    gets(buffer);

    printf("Masukkan sebuah karakter lagi = ");
    karakter = getchar();

    printf("Karakter kedua yang Anda masukkan adalah '%c\n'", karakter);

    return 0;
}
