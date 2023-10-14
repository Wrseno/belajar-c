#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
    char status;
    printf("Belajar Bahasa C\n");
    printf("Tampilkan lagi? (y/n) : ");
    status = getchar();
    if (toupper(status) == 'Y') {
        printf("\nMasih Semangat Bahasa C");
    } else {
        exit(0);
    }

    return 0;
}
