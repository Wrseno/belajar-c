// membuat tabel 3

#include <stdio.h>

int main() {
    printf("-------------------------------------------------------\n");
    printf("|   NO      | NAMA BARANG                | HARGA BARANG\n");
    printf("-----------------------------------------\n");
    printf("|   %s5  | %-25s  | Rp %8d\n", "AL-04", "BUKU TULIS", 20000);
    printf("|   %s5  | %-25s  | Rp %8d\n", "AO-01", "CRAYON", 28500);
    printf("|   %s5  | %-25s  | Rp %8d\n", "DL-04", "BUKU TULIS", 10750);
    printf("-------------------------------------------------------\n");
}
