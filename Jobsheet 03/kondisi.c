#include <stdio.h>
#include <stdbool.h>

int main() {
    // Menggunakan tipe integer
    int nilai;
    nilai = 5 > 3;
    printf("Nilai = %d\n", nilai);

    nilai = 3 > 5;
    printf("Nilai = %d\n", nilai);

    bool nilai2;
    nilai2 = 5 > 3;
    printf("Nilai2 = %d\n", nilai2);

    nilai2 = 3 > 5;
    printf("Nilai2 = %d\n", nilai2);
}