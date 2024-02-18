#include <stdio.h>

int main() {
    float berat_badan_ideal;
    float tinggi_badan;

    printf("================================\n");
    printf("HITUNG BERAT BADAN IDEAL BERDASARKAN TINGGI\n");
    printf("================================\n");
    printf("\nMasukkan tinggi badan (dalam cm): ");
    scanf("%f", &tinggi_badan);

    berat_badan_ideal = tinggi_badan - 100 - (tinggi_badan - 100) * 10/100;
    printf("\nBerat badan idealmu adalah : %.2f Kg", berat_badan_ideal);
}