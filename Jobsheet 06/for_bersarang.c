#include <stdio.h>

int main() {
    int tinggi, baris, bintang;

    printf("Masukkan tinggi segitiga : ");
    scanf("%d", &tinggi);

    for (baris = 1; baris <= tinggi; baris++) 
    {
        for (bintang = 1; bintang <= baris; bintang++) 
            printf("*");
            printf("\n");
    }

    return 0;
}
