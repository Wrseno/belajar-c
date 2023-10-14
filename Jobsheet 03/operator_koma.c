#include <stdio.h>

int main() {
    int nilai;

    nilai = (5 > 3, 3 > 5);
    printf("Hasil ungkapan -> nilai = (5 > 3, 3, > 5) adalah %d\n", nilai);

    nilai = (3 > 5, 5 > 3);
    printf("Hasil ungkapan -> nilai = (3 > 5,5, > 3) adalah %d\n", nilai);

    return 0;
}