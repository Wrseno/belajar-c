#include <stdio.h>
#include <stdbool.h>

int main() {
    int x = 3 < 5;
    int y = 9 < 6;
    int z = 2 > 1;
    bool cek;

    cek = x && y; // Logika AND
    printf("x, y operasi AND = %d\n", cek);
    cek = x || y; // Logika OR
    printf("x, y operasi OR = %d\n", cek);
    cek = x ^ y; // Logika XOR
    printf("x, y operasi XOR = %d\n", cek);
    cek = x && z; // Logika XOR
    printf("x, z operasi XOR = %d\n", cek);
}