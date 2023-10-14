// program kalkulator sederhana dengan dua input

#include <stdio.h>

int main() {
    float a, b, kali, bagi, tambah, kurang;

    printf("Masukkan dua angka untuk dikalkulasi : ");
    scanf("%f,%f", &a, &b);
    printf("======================================\n");

    kali = a * b;
    bagi = a / b;
    tambah = a + b;
    kurang = a - b;

    printf("Kalkulasi dari dua angka tersebut : \n");
    printf("======================================\n");
    printf("Hasil dari %2.f * %2.f adalah : %2.f\n", a, b, kali);
    printf("Hasil dari %2.f / %2.f adalah : %2.f\n", a, b, bagi);
    printf("Hasil dari %2.f + %2.f adalah : %2.f\n", a, b, tambah);
    printf("Hasil dari %2.f - %2.f adalah : %2.f\n", a, b, kurang);
}   
