#include <stdio.h>

int main() {
    float nilaiUjian, nilaiTugas;
    
    printf("Masukkan nilai ujian = ");
    scanf("%f", &nilaiUjian);
    printf("Masukkan nilai tugas = ");
    scanf("%f", &nilaiTugas);

    if ((nilaiUjian >= 70) && (nilaiTugas >= 75)) {
        printf("Mahasiswa lulus untuk mata kuliah Pemrograman Bahasa C");
    } else {
        printf("Mahasiswa mengulang mata kuliah Pemrograman Bahasa C");
    }
}
