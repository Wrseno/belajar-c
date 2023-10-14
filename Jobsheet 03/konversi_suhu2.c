#include <stdio.h>

int main() {
    int celcius, reamur_salah, reamur_benar;
    celcius = 25;
    reamur_salah = 4 / 5 * celcius;
    reamur_benar = 4.0 / 5 * celcius;

    printf("Nilai konversi suhu dengan rumus yang salah adalah = %d\n", reamur_salah);
    printf("Nilai konversi suhu dengan rumus yang benar adalah = %d\n", reamur_benar);

    return 0;
}