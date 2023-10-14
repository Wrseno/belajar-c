#include <stdio.h>

int main() {
    int array[10], i, n;
    float rata, total = 0;

    printf("Program Menghitung Nilai Rata-Rata\n");
    printf("Masukkan banyak bilangan yang akan dihitung rata-ratanya : ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Nilai ke-%d : ", i+1);
        scanf("%d", &array[i]);
        total += array[i];
    }

    rata = total/n;
    printf("Hasil nilai total adalah : %f\n", total);
    printf("Hasil rata-rata adalah : %f\n", rata);

    return 0;
}
