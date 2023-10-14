#include <stdio.h>

int main() {
    int suhu;

    printf("Masukkan temperatur suhu : ");
    scanf("%d", &suhu);

    if (suhu <= 10) {
        printf("Dingin");
    } else if (suhu > 10 && suhu <= 20) {
        printf("Sejuk");
    } else if (suhu > 20 && suhu <= 35) {
        printf("Biasa");
    } else if (suhu > 35) {
        printf("Panas");
    }
}
