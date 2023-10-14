#include <stdio.h>
#include <ctype.h>

int main() {
    char pilihan, karakter[255];

    printf("Pilihan Anda (A, B, C, D) : ");
    pilihan = getchar();
    pilihan = toupper(pilihan);

    gets(karakter); // buang semua karakter tersisa

    while (! ((pilihan == 'A' || (pilihan == 'B') 
    || (pilihan == 'C') || (pilihan == 'D')))) {
        // baca kembali satu karakter
        printf("Pilihan Anda (A, B, C, D) : ");
        pilihan = getchar();
        pilihan = toupper(pilihan); // ubah ke huruf kapital

        // buang semua karakter tersisa
        gets(karakter);
    }

    printf("Pilihan Anda = %c", pilihan);
}
