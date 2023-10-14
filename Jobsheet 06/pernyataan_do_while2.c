#include <stdio.h>

int main() {
    int bilangan, n;

    printf("Masukkan banyak perulangan : ");
    scanf("%d", &n);
    bilangan = 1;
    
    do {
        printf("Masih semangat bang\n");
        bilangan++;
    } while (bilangan <= 8);

    return 0;
}
