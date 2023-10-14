#include <stdio.h>

int main() {
    int bilangan = 1;

    while (bilangan <= 10) {
        if (bilangan > 6)
            break;
        printf("%d\n", bilangan);
        bilangan++;
    }

    return 0;
}
