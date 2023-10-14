#include <stdio.h>

int main() {
    int bilangan = 1;

    for (bilangan = 0; bilangan <= 10; bilangan++) {
        printf("%d", bilangan);

        continue;

        printf("Tulisan ini tidak muncul");
    }

    return 0;
}
