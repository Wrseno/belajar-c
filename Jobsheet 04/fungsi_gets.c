// fungsi gets() untuk menerima masukan string

#include <stdio.h>

int main() {
    char greeting[255];

    printf("Masukkan ucapan = ");
    gets(greeting);

    printf("Ucapan yang Anda tuliskan = \n%s", greeting);

    return 0;
}
