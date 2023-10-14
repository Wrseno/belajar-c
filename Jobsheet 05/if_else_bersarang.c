#include <stdio.h>

int main() {
    float suhu;

    printf("Masukkans suhu udara = ");
    scanf("%f", &suhu);

    if (suhu == 0) {
        printf("Suhu udara 0 derajat");
    } else if (suhu > 0) {
        printf("Suhu udara diatas 0 derajat yaitu %0.1f", suhu);
    } else {
        printf("Suhu udara dibawah 0 derajat yaitu %0.1f", suhu);
    }

    return 0;
}
