#include <stdio.h>

int main() {
    int a,b,n;
    printf("Masukkan tinggi segitiga : ");
    scanf("%d", &n);
    
    for (a = 0; a <= n; b++) {
        for (b = 0; b <= n; b++) {
            printf(" ");
        }
        for (b = a; b <= n; b++) {
            printf(" ");
        }
        for (b = 1; b <= 1; b++) {
            printf(" ");
        }
        for (b = 1; b < a; b++) {
            printf(" ");
        }
        printf("\n");
    }

    return 0;
}
