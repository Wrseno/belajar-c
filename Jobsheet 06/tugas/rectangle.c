#include <stdio.h>

int main() {
    int a,b,n;
    
    printf("Masukkan tinggi segitiga : ");
    scanf("%d", &n);
    
    for (a = 0; a <= n; a++) {
        for (b= 0; b <= n; b++) {
            printf("  ");
        }
        for (b = 0; b <= n - a; b++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
