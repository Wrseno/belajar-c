#include <stdio.h>

int main() {
    int bilangan, pencacah;

    printf("Masukkan bilangan : ");
    scanf("%d", &bilangan);

    pencacah = 0;
    while (pencacah <= bilangan) {
        printf("Semangat bang\n");

        pencacah++;
    }

    return 0;
}
